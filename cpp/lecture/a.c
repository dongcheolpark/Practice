#include <limits.h>
#include <float.h>
#include <stdio.h>


int main() {
    printf("%Le\n",LDBL_MIN);
    printf("%Le\n",LDBL_MAX);
    printf("%d\n",LDBL_DIG);
    return 0;
}