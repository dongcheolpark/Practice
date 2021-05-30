#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

class max_hip {
private:
    int * data;
    int size;
    void swap(int & a,int & b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
public:
    max_hip(int n) {
        data = new int[n];
        size = 0;
    }
    void push(int n) {
        data[size] = n;
        size++;
        for(int i = (size-1)/2;(i-1)/2>=0;i = (i-1)/2) {
            if(data[(i-1)/2] < data[i]) {
                swap(data[(i-1)/2],data[i]);
            }
            else break;
        }
    }
    int top() {
        if(size == 0) return 0;
        return data[0]; 
    }
    void pop() {
        if(size == 0) return;
        data[0] = data[size];
        data[size] = 0;
        size--;
        int n = 1; 
        while(n < size) {
            for(int i = n;i<n+2;i++) {
                if(data[(i-1)/2] < data[i]) {
                    swap(data[(i-1)/2],data[i]);
                    n = i;
                }
                break;
            }
            n *= 2+1;
        }
    }

};

int main() {
    max_hip * hip;
    int n;
    scanf("%d",&n);
    hip = new max_hip(n);
    while(n--) {
        int tmp;
        scanf("%d",&tmp);
        if(tmp == 0) {
            printf("%d\n",hip->top());
            hip->pop();
        }
        else hip->push(tmp);
    }
    
}