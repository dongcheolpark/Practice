#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

int two(int x) {
	int res = 0;
	for(;!(x%2);x/=2) {
		res++;
	}
	return res;
}

int five(int x) {
	int res = 0;
	for(;!(x%5);x/=5) {
		res++;
	}
	return res;
}

int main() {
	int n;
	scanf("%d",&n);
	int a = 0,b = 0;
	for(int i = 1;i<=n;i++) {
		a += two(i);
		b += five(i);
	}
	printf("%d",min(a,b));
}