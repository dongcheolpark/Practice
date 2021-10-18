#include <stdio.h>

int main() {
	int i,*p = &i;
	i = (int)p;
	printf("%d",i);
}