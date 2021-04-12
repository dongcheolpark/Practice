
#include <stdio.h>

<<<<<<< HEAD
int arr[MAX_SIZE];

void swap(int * a,int * b) {
	int tmp = *a;
	int a = *b;
	int b = tmp;
}

void partition(int left, int right) {
	
}
=======
int main(void)
{
    int num;

    printf("정수 입력:");
    scanf("%d", &num);


    printf("x>>3=%d\n",num>>3);
    printf("x<<3=%d\n",num<<3);
>>>>>>> d2da5df64241c1d56490fba12ff28f0027edbc09

    return 0;


<<<<<<< HEAD
int main()
{
    int n, n2;
    int arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
=======
}
>>>>>>> d2da5df64241c1d56490fba12ff28f0027edbc09
