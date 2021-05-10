#include <stdio.h>

double recusive(int n){
    if(n==1) return 1;
    return 1.0 / n + recusive(n - 1);
}

int main() {
    printf("n=20일때 20항까지의 수열값:%f",recusive(20));
}