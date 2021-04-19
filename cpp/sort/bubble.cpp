#include <cstdio>
#include <limits.h>
#include "sort.h"

int main() {
    int arr[1000];
    int n = 0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++) {
        scanf("%d",arr+i);
    }
    for(int i = 0;i<n;i++) {
        for(int j = i;j<n;j++) {
            if(arr[j+1] < arr[j]) {
                swap(arr[j+1],arr[j]);
            }
        }
    }
}