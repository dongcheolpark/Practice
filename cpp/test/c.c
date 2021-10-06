#include <stdio.h>

int main() {
	int arr[100],n = 100;
	for(int i = 0;i<n;i++) {
		if(arr[i] >= '0'&&arr[i] <= '9') {
			int tmp = 0;
			do{
				tmp *= 10;
				tmp += arr[i] - '0';
				i++;
			}
			while(arr[i+1]>='0'&&arr[i+1]<='9');
			i--;
		}
	}
}