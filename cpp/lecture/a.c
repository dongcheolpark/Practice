#include <stdio.h>
int main(void){
    int num;
    printf("3자리 정수를 입력하세요 : ");
    scanf("%d",num);
    printf("백의 자리 숫자 : %d\n 일의 자리 숫자 : %d",num/100,num%10);
    return 0;
}