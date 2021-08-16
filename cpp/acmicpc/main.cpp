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
	int arr[n][n],d[n],v[n];
	for(int i = 0;i<n;i++) {
		for(int j = 0;j<n;j++) {
			arr[i][j] = INF;
		}
	}
	for(int i = 0;i<m;i++) {
		int s,e,l;
		cin>>s>>e>>l;
		arr[s][e] = l;
	}
	for(int i = 0;i<n;i++) {
		v[i] = false;
		d[i] = arr[start][i];
	}
	v[start] = true;
	for(int i = 0;i<n-2;i++) {
		int current = i;
		for(int j = 0;j<n;j++) {
			int min = INF;
			if(d[j] < min && v[j]){
				min = d[j];
				current = j;
			}
		} 
		v[current] = true;
		for(int j = 0;j<n;j++) {
			if(!v[j] && d[current] + arr[current][j] < d[j]) {
				d[j] = d[current] + arr[current][j];
			}
		}
	}

	for(int i = 0;i<n;i++) {
		if(i == start) {
			cout<<'0'<<'\n';
		}
		else {
			cout<<v[i]<<'\n';
		}
	}
}
