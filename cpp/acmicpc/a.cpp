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
bool arr[100001];

int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    if(n == m) {
        printf("0");
        return 0;
    }
    q.push(pair1(n,0));
    arr[n] = 1;
    for(int i = 1;;i++) {
        int l = q.size();
        for(int j =0;j<l;j++) {
            pair1 tmp = q.front();
            //printf("%d ",tmp.x);
            q.pop();
            if(tmp.x+1 <= 100000&&!arr[tmp.x+1]) {
                if(tmp.x+1 == m) {
                    printf("%d ",i);
                    return 0;
                }
                arr[tmp.x+1] = 1;
                q.push(pair1(tmp.x+1,i));
            } 
            if(tmp.x-1>=0&&!arr[tmp.x-1]) {
                if(tmp.x-1 == m) {
                    printf("%d ",i);
                    return 0;
                }
                arr[tmp.x-1] = 1;
                q.push(pair1(tmp.x-1,i));
            } 
            if(tmp.x*2 <= 100000&&!arr[tmp.x*2]) {
                if(tmp.x*2 == m) {
                    printf("%d ",i);
                    return 0;
                }
                arr[tmp.x*2] = 1;
                q.push(pair1(tmp.x*2,i));
            } 
        }
        //puts("");
    }
}