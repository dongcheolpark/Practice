#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
#include <utility>

using namespace std;

#define N 100

int n,m;
vector<pair<int,int>> ladder;
vector<int> arr;
int dist[10][10];

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	cin>>n>>m;
	n = n+m;
	for(int i = 0;i<n;i++) {
		int a,b;
		cin>>a>>b;
		ladder.push_back(make_pair(a,b));
	}
	memset(dist,0,100*sizeof(int));
	queue q;

}