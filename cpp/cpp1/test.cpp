#include <cstdio>

#define MAX_SIZE 1000000

int arr[MAX_SIZE];

void swap(int * a,int * b) {
	int tmp = *a;
	int a = *b;
	int b = tmp;
}

void partition(int left, int right) {
	
}

void sort() {

}

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
