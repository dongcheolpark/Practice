#include <cstdio>
int main()
{
    int num;
    scanf("%d",&num);
    int a = num/100,b = num/10%10,c = num%10;
    printf("%d %d",(a>b)&&(a>c)? a : (b>a)&&(b>c) ? b : c,(a>b) ? ((a<c) ? a : (b>c) ? b: c) : ((b<c) ? b : (c>a) ? c : a));
    return 0;
}