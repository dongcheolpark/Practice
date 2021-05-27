#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

<<<<<<< HEAD
int main() {
    char a;
    int res;
    while(scanf("%c",a) != EOF) {
        if(a == ' ') {
            res++;
        }
    }
    printf("%d",res);
=======
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
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    func(0);
    printf("%d",res);

>>>>>>> a0291f0eb51564bd2d63d02534c3ab5014782e9e
}