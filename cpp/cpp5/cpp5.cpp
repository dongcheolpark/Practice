#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>
#define MAX_INT 2100000000

using namespace std;

int main() {
    int n,sum,max = MAX_INT,min = -MAX_INT;
    int arr[8002];
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int> > min_heap;

    scanf("%d",&n);
    int num = n;
    while(num--) {
        int tmp;
        scanf("%d",&tmp);
        sum += tmp;
        if(max < tmp) {
            max = tmp;
        }
        else if(min > tmp) {
            min = tmp;
        }
        arr[4000+tmp]++;
        if(tmp < max_heap.top()) {
            max_heap.push(tmp);
        }
        else {
            min_heap.push(tmp);
        }
        if(max_heap.size() < min_heap.size()) {
            max_heap.push(min_heap.top());
            min_heap.pop();
        }
        else if(max_heap.size() > min_heap.size() + 1 ) {
            min_heap.push(max_heap.top());
            max_heap.pop();
        }
    }
    bool chk = false;
    int a = 0,cnt = 0;

    for(int i = 0;i<=8000;i++) {
        if(arr[i] > cnt) {
            chk = false;
            cnt = arr[i];
            a = i - 4000;
        } 
        if(arr[i] == cnt && !chk) {
            chk = true;
            a = i;
        }
    }
    printf("%d %d %d %d",sum/n,max_heap.top(),a,max-min);
    
    return 0;
}