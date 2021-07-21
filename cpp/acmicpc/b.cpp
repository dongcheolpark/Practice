#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <climits>
#include <utility>
#include <vector>

using namespace std;

int arr[64][64];

int check(int x,int y,int n) {
	int tmp = arr[x][y];
	for(int i = x;i<x+n;i++) {
		for(int j = y;j<y+n;j++) {
			if(tmp != arr[i][j]) return -1;
		}
	}
	return tmp;
}

void func(int x,int y,int n) {
	if(n == 1) {
		printf("%d",arr[x][y]);
		return;
	}
	int a = check(x,y,n);
	if(a != -1) {
		printf("%d",a);
		return;
	}
	printf("(");
	for(int i = x;i<x+n;i+=n/2) {
		for(int j = y;j<y+n;j+=n/2) {
			func(i,j,n/2);
		}
	}
	printf(")");
}

int main() {
	int n;
	scanf("%d",&n);
	for(int i = 0;i<n;i++) {
		char ch[n+1];
		scanf("%s",ch);
		for(int j = 0;j<n;j++) {
			arr[i][j] = ch[j] - '0';
		}
	}

	func(0,0,n);
	
	return 0;
}
