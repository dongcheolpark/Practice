#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <cmath>
#include <vector>

#define INF 2100000000

using namespace std;


int main() {
	int n,m,start;
	cin.tie(NULL);

	cin>>n>>m>>start;
	start--;
	int d[n];
	priority_queue<pair<int,int> > pq;
	vector<pair<int,int> > a[n];
	for(int i = 0;i<m;i++) {
		int s,e,l;
		cin>>s>>e>>l;
		a[s-1].push_back(make_pair(l,e-1));
	}
	for(int i = 0;i<n;i++) {
		d[i] = INF;
	}
	d[start] = 0;
	pq.push(make_pair(start,0));
	while(!pq.empty()) {
		int current = pq.top().second;
		int distance = -pq.top().first;
		pq.pop();
		if(d[current] < distance) continue; 
		for(int i = 0;i < a[current].size();i++) {
			int next = a[current][i].second;
			int next_distance = distance + a[current][i].first;
			if(next_distance < d[next]) {
				d[next] = next_distance;
				pq.push(make_pair(-next_distance,next));
			}
		}
	}

	for(int i = 0;i<n;i++) {
		if(d[i] == INF) {
			cout<<"INF\n";
		}
		else {
			cout<<d[i]<<'\n';
		} 
	}
}
