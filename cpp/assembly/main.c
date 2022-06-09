#include <stdio.h>
#define N 4

int main() {
	float arr[N][N],res[N][N];
	for(int i = 0;i<N;i++) {
		for(int j = 0;j<N;j++) {
			arr[i][j] = (i)*4+(j+1);
		}
	}
	asm("nop");
	for(int i = 0;i<N;i++) {
		for(int j = 0;j<N;j++) {
			asm("nop");
			res[i][j] = 0;
			for(int k = 0;k<N;k++) {
				*(*res+i*4+j) += arr[i][k] * arr[k][j];
			}
		}
	}
	asm("nop");
	for(int i = 0;i<N;i++) {
		for(int j = 0;j<N;j++) {
			printf("%.1f ",res[i][j]);
		}
		puts("");
	}
	return 0;
}