#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

struct pair1 {
    int x;
    int cnt;
    pair1(int x,int cnt) {
        this->x = x;
        this->cnt = cnt;
    }
};

queue<pair1> q;
bool arr[100000];

int main() {
    int n,m;
            printf("%d ",10);
    scanf("%d %d",&n,&m);
            printf("%d ",20);
    q.push(pair1(n,0));
            printf("%d ",30);
    arr[n] = 1;
            printf("%d ",40);
    for(int i = 1;i<10;i++) {
        int l = q.size();
        for(int j =0;j<l;j++) {
            pair1 tmp = q.front();
            printf("%d ",tmp.x);
            q.pop();
            if(!arr[tmp.x+1]) {
                if(tmp.x+1 == m) {
                    printf("%d ",i+1);
                }
                arr[tmp.x+1] = 1;
                q.push(pair1(tmp.x+1,i));
            } 
            if(!arr[tmp.x-1]) {
                if(tmp.x-1 == m) {
                    printf("%d ",i+1);
                }
                arr[tmp.x-1] = 1;
                q.push(pair1(tmp.x-1,i));
            } 
            if(!arr[tmp.x*2]) {
                if(tmp.x*2 == m) {
                    printf("%d ",i+1);
                }
                arr[tmp.x*2] = 1;
                q.push(pair1(tmp.x*2,i));
            } 
        }
    }
}