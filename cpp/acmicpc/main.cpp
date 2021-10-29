#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <cmath>
#include <vector>

#define INF 2100000000

using namespace std;

int arr[101],v[101];

int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i = 0;i<101;i++) {
		arr[i] = i;
		v[i] = -1;
	}
	for(int i = 0;i<n+m;i++) {
		int a,b;
		cin>>a>>b;
		arr[a] = b;
	}
	//bfs
	queue<int> q;
	q.push(1);
	v[1] = 0;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 1; i <= 6; i++) {
			int y = x + i;
			if (y > 100) continue;
			y = arr[y]; 
			if (v[y] == -1) { 
				v[y] = v[x] + 1;
				q.push(y);
			}
		}
	}
	cout<<arr[100];
	return 0;
}

