#include <limits.h>
#include <cstdio>
#include "sort.h"


void select::sort(int * arr,int n) {
    for(int i = 0;i<n;i++) {
        int tmp = INT_MAX;
        int a = i;
        for(int j = i;j<n;j++) {
            if(tmp > arr[j]) {
                tmp = arr[j];
                a = j;
            }
        }
        swap(arr[i],arr[a]);
    }
}