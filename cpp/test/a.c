#include <stdio.h>

void re_bin_num(int n) {
    if(n == 0) {
        printf("%d ",n%2);
        return;
    }
    re_bin_num(n/2);
    printf("%d ",n%2);
}

int r_sum(int num){
    if(num == 1) return 1;
    return num + r_sum(num);
}

int main() {
    int n = 20;
    scanf("%d",&n);
    re_bin_num(n);
}