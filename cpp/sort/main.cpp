#include <stdio.h>
#include "sort.h"

int main() {
    int arr[1000];
    int n = 0;
    int sel = 0;
    printf("1.select 2.bubble 3.merge");
    s * selsort;  
    scanf("%d",&sel);
    switch (sel)
    {
    case 1:
        selsort = new select();
        break;
    
    default:
        return 0;
    }
    scanf("%d",&n);
    for(int i = 0;i<n;i++) {
        scanf("%d",arr+i);
    }
    selsort->sort(arr,n);
    for(int i = 0;i<n;i++) {
        printf("%d ",arr[i]);
    }
}