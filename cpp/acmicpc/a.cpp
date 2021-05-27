#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

bool arr[100][100];
bool chk[100] = {0,};
int n,m,res;

void func(int a) {
    if(chk[a]) {
        return;
    }
    chk[a] = 1;
    res++;
    for(int i = 0;i<n;i++) {
        if(arr[a][i]) {
            func(i);
        }
    }
}


int main() {
    scanf("%d %d",&n,&m);
    for(int i =0;i<m;i++) {
        int a,b;
        scanf("%d %d",&a,&b);
        arr[a-1][b-1] = 1;
        arr[b-1][a-1] = 1;
    }
    func(0);
    printf("%d",res-1);

}