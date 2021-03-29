
#include <stdio.h>

int main(void)
{
    int num;

    printf("정수 입력:");
    scanf("%d", &num);


    printf("x>>3=%d\n",num>>3);
    printf("x<<3=%d\n",num<<3);

    return 0;


}