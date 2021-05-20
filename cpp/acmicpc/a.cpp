#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

int arr[20][20];
bool check[20] = {0,};
int size;
int n;
int team1,team2;
int res;

void func(int num) {
    if(size == n/2) {

    }
    for(int i = 0;i<n;i++) {
        if(check[i]) continue;
        
    }
}

int main() {
    scanf("%d",&n);
    for(int i = 0;i<n;i++) {
        for(int j = 0;j<n;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    
}