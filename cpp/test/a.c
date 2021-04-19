#include <stdio.h>

int main() {
    int n;
    int s = 0,r = 0,b = 0;
    scanf("%d",&n);//찾기 원하는 숫자 입력
    while(1) {
        int tmp;
        scanf("%d",&tmp);//숫자 입력
        if(tmp == 0) break;
        for(int i = tmp;i;i/=10) {//자릿수별로 정수 나눔
            if(i%10 > n) b++; // 숫자보다 크면 b++;
            else if(i%10<n) s++; // 숫자보다 작으면 s++
            else r++; // 숫자이면 r++
        }
    }
    printf("%d %d %d",r,s,b); // 값 출력
}