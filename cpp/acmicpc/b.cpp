#include <cstdio>
#include <string>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;
vector<int> v;

int main() {
	int n;
	scanf("%d",&n);
	for(int i = 0;i<n;i++) {
		int tmp;
		scanf("%d",&tmp);
		v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	int res;
	for(int i = 0;i<n;i++) {
		res += (n-i)*v[i];
	}
	printf("%d",res);
}