#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <utility>
#include <vector>

using namespace std;

vector<int> v;

int func(int m,vector<int>::reverse_iterator x) {
	int res = 0;
	for(vector<int>::reverse_iterator item = x;item != v.rend();item++) {
		if(*item > m) continue;
		int a = m/(*item);
		int b = m%(*item);
		if(b == 0) return a;
		int c = func(b,item+1);
		if(c != -1) return c+a;
	}
	return -1;
}

int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i = 0;i<n;i++) {
		int tmp;
		scanf("%d",&tmp);
		if(tmp <= m) {
			v.push_back(tmp);
		}
	}
	printf("%d",func(m,v.rbegin()));
}

