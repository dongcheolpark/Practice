#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int * tree, * arr;

int init(int i,int s,int e) {
	if(s == e) {
		tree[i] = arr[s];
	}
	else {
		tree[i] = init(i*2+1, s, (s+e)/2) + init(i*2 + 2, (s+e)/2 + 1, e);
	}
	return tree[i];
}

int sum(int i,int s,int e,int l,int r) {
	if(s > r || e < l) {
		return 0;
	}
	else if(s >= l && e <= r) {
		return tree[i];
	}
	else {
		int m = (s + e)/2;
		return sum(2*i + 1, s, m ,l,r) + sum(2*i+2,m+1,e,l,r);
	}
}

int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	int h = ceil(log2(n));
	int tree_size = 1 << (h+1);

	arr = new int[n];
	tree = new int[tree_size];

	for(int i = 0;i<n;i++) {
		scanf("%d",arr+i);
	}
	init(0,0,n-1);

	while (m--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		printf("%d\n",sum(0,0,n-1,a-1,b-1));
	}
	
}

