#include <cstdio>
#include <limits.h>
#include "sort.h"

void bubble::sort(int * arr,int n) {
    for(int i = 0;i<n;i++) {
        for(int j = i;j<n;j++) {
            if(arr[j+1] < arr[j]) {
                swap(arr[j+1],arr[j]);
            }
        }
    }
}