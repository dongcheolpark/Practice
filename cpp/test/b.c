#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d",&n); //다이아몬드 변의 개수 입력
    for(int i = 1;i<n;i++) {
        for(int j = 1;j<n*2;j++) {//다이아몬드 윗부분 출력
            if(j>n-i && j<n+i) printf("*");//별 찍는 범위 계산
            else printf(" ");
        }
        printf("\n");
    }
    for(int i = 1;i<n*2;i++) { //다이아몬드 중간부분 출력
        printf("*");
    }
    printf("\n");
    for(int i = n+1;i<n*2;i++) {
        for(int j = 1;j<n*2;j++) {//다이아몬드 아랫부분 출력
            if(j>n-(n*2-i) && j<n+(n*2-i)) printf("*"); //별 찍는 범위 계산
            else printf(" ");
        }
        printf("\n");
    }
}