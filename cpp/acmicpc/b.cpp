#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <climits>
#include <utility>
#include <vector>

using namespace std;

int arr[10];

int num_size(int a) {
	if(a == 0) {
		if(arr[0]) return 1;
		return -1;
	}
	int i = 0;
	while(a) {
		if(!arr[a%10]) return -1;
		a/=10;
		i++;
	}
	return i;
}

int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i = 0;i<10;i++) arr[i] = 1;
	for(int i = 0;i<m;i++) {
		int tmp;
		scanf("%d",&tmp);
		arr[tmp] = 0;
	}
	int min = abs(n-100);
	for(int i = 0;i<=1000000;i++) {
		int size = num_size(i);
		if(size == -1) continue;
		int a = size + abs(n-i);
		if(min > a) min = a;
	}
	printf("%d",min);
}
