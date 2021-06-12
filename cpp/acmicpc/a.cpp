#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <utility>
#include <queue>
#include <vector>

using namespace std;

vector<pair<int,int> > v[100000];

int func(int n) {
    if(v[n].empty()) return 0;

    int res = 0;
    for(int i = 0;i<v[n].size();i++) {
        pair<int,int> tmp = v[n][i];
        int a = func(tmp.first);
        if( a + tmp.second > res) {
            res = a + tmp.second;
        }
    }
    return res;
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++) {
        int num;
        scanf("%d",&num);
        while(1) {
            int a,b;
            scanf("%d",&a);
            if(a == -1) break;
            scanf("%d",&b);
            v[num].push_back(make_pair(a,b));
        }
    }
    int res = 0;
    for(int i = 1;i<=n;i++) {
        int tmp = func(i);
        if(tmp > res) res = tmp;
    }
    printf("%d",res);
}
