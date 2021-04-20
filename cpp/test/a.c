#include <stdio.h>

long long factorial(int n)
{
    int i;
    long long result = 1;
    for (i = 1; i <= n; i++)
        result *= i;

    return result;
}
int main()
{
    int i, n;
    double sum = 1.0;
    printf("어디까지 계산할까요:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum += 1.0 / factorial(i);
    printf("오일러의 수는 %f입니다.\n", sum);

    return 0;


}