#include <cstdio>

int main() {
    int n;
    scanf("%d",&n);
    int k = 2;
    while(n>1) {
        if(n%k == 0) {
            n/=k;
            printf("%d ",k);
        }
        else k++;
    }
}