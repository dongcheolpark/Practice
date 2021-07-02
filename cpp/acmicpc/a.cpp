#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <utility>
#include <queue>
#include <map>
#include <vector>

using namespace std;

vector<int> arr[51];
int list[51];
int res,n,m,val = 0;

void func(int a) {
    if(a >= m) {
        if(val > res) {
            res = val;
            return;
        }
    }
    int size = arr[a].size();
    vector<int> data = arr[a];
    bool chk = false;
    for(int i = 0;i<size;i++) {
        if(list[data[i]] == 1)  {
            chk = true;
            break;
        }
    }
    if(!chk) {
        val++;
        for(int i = 0;i<size;i++) {
            list[data[i]] = 1;
        }
        func(a+1);
        for(int i = 0;i<size;i++) {
            list[data[i]] = 0;
        }
    } 
    func(a+1);
}

int main() {
    scanf("%d %d",&n,&m);
    int tmp; 
    scanf("%d",&tmp);
    int a;
    for(int i = 0;i<n;i++) {
        list[i] = 0;
    }
    for(int i = 0;i<tmp;i++) {
        scanf("%d",&a);
        list[a] = 1;
    }
    for(int i = 0;i<m;i++) {
        scanf("%d",&tmp);
        for(int j = 0;j<tmp;j++) {
            scanf("%d",&a);
            arr[i].push_back(a);
        }
    }
    func(0);
    printf("%d",res);
}
