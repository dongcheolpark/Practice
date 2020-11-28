#include <cstdio>

int fact(int a);

int main()
{
    printf("%d", fact(3));
    return 0;
}

int fact(int a) {

    if (!a) return 1;
    return fact(a-1)*a; 
}
