#include <stdio.h>

int* max(int *ar,int n);
int* min(int *ar,int n);

int main() {
	int N;
	scanf("%d",&N);
	while(N--) {
		int arr[100];
		int * p = arr;
		int n = 0;
		for(int i = 0;i<100;i++) {
			int tmp;
			scanf("%d",&tmp);
			if(tmp == 0) {
				n = i;
				break;
			}
			else {
				*(p+i) = tmp;
			}
		}
		int *s = max(p,n),*e = min(p,n);
		if(s > e) {
			int *tmp = s;
			s = e;
			e = tmp;
		}
		if(s == e-1 || s == e) {
			printf("none\n");
			continue;
		}
		for(int * i = s+1;i != e;i++) {
			printf("%d ",*i);
		}
		puts("");
	}
}

int* max(int *ar,int n) {
	int Max = *ar;
	int * res = ar;
	for(int * ptr = ar+1;ptr != ar+n;ptr++) {
		if(Max < *(ptr)) {
			Max = *(ptr);
			res = ptr;
		}
	}
	return res;
}
int* min(int *ar,int n) {
	int Min = *ar;
	int * res = ar;
	for(int * ptr = ar+1;ptr != ar+n;ptr++) {
		if(Min > *(ptr)) {
			Min = *(ptr);
			res = ptr;
		}
	}
	return res;

}