#include <limits.h>
#include <cstdio>
#include "sort.h"


template<typename T>
void select::sort(T * arr,T n) {
    for(int i = 0;i<n;i++) {
        T tmp = INT_MAX;
        T a = i;
        for(int j = i;j<n;j++) {
            if(tmp > arr[j]) {
                tmp = arr[j];
                a = j;
            }
        }
        swap(arr[i],arr[a]);
    }
}