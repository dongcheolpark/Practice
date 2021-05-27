#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

bool arr[128][128];
int n;

int check_res(int num,int x,int y) {
    bool chk = arr[x][y];
    for(int i = x;i<num+x;i++) {
        for(int j = y;j<num+y;j++) {
            if(chk != arr[i][j]) return 0;
        }
    }
    if(chk == 0) {
        return 1;
    }
    if(chk == 1) {
        return 2;
    }
}

int res1 = 0,res2=0;

void func(int num,int x,int y) {
    int tmp = check_res(num,x,y);
    if(num == 1) {
        if(arr[x][y] == 1) res1++;
        else res2++;
    }
    if(tmp == 1) {
        res1++;
        return;
    }
    if(tmp == 2) {
        res2++;
        return;
    }
    for(int i = 0;i<2;i++) {
        for(int j = 0;j<2;j++) {
            func(num/2,x+num*i,y+num*j);
        }
    }
}

int main() {
<<<<<<< HEAD
    scanf("%d %d",&n,&m);
    for(int i =0;i<m;i++) {
        int a,b;
        scanf("%d %d",&a,&b);
        arr[a-1][b-1] = 1;
        arr[b-1][a-1] = 1;
    }
    func(0);
    printf("%d",res-1);

=======
    scanf("%d",&n);
    for(int i = 0;i<n;i++) {
        for(int j = 0;j<n;j++) {
            scanf("%d",arr+i);
        }
    }
    func(n,0,0);
    printf("%d\n%d",res1,res2);
>>>>>>> 2a7b1ec95909c481e4c21666cf63e057cb25ae81
}