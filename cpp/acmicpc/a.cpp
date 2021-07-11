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

int parent[51];
vector<int> knowing;
vector<vector<int> > party(50);
int res,n,m,val = 0;

int Find(int x) {
    if (parent[x] == x)
        return x;
    return x = Find(parent[x]);
}

void Union(int x, int y) {
    x = Find(x);
    y = Find(y);
    parent[x] = y;
}

int answer() {
    int res = m;
    for(const vector<int> &people : party) {
        bool flag = false;
        for(const int &person : people) {
            if(flag) break; 
            for(const int &know : knowing) {
                if(Find(person) == Find(know)) {
                    flag = true;
                    break;
                }
            }
        }
        if(flag) {
            res--;
        }
    }
    return res;
}

int main() {
    scanf("%d %d",&n,&m);
    int tmp; 
    scanf("%d",&tmp);
    int a;
    for(int i = 0;i<n;i++) {
        parent[i] = i;
    }
    for(int i = 0;i<tmp;i++) {
        scanf("%d",&a);
        knowing.push_back(a);
    }
    for(int i = 0;i<m;i++) {
        scanf("%d",&tmp);
        int num,prev;
        for(int j = 0;j<tmp;j++) {
            if(j >= 1) {
                prev = num;
                scanf("%d",&num);
                Union(prev,num);
            }
            else {
                scanf("%d",&num);
            }
            party[i].push_back(num);
        }
    }
    printf("%d",answer());
}
