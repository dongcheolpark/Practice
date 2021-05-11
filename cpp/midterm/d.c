#include <stdio.h>

float my_cal(char a,float b,float c) {
    switch (a)
    {
        case '+' :
            return b + c;
        case '-' :
            return b - c;
        case '*' :
            return b * c;
        case '/' :
            return b / c;
    }
}

int main() {
    double b,c;
    char a;
    printf("연산자를 입력하시오 : ");
    scanf("%c",&a);
    rewind(stdin);
    printf("두 개의 숫자를 입력하세요 : ");
    scanf("%lf %lf",&b,&c);
    printf("결과값은 %.2f 입니다.",my_cal(a,b,c));
    return 0;
}