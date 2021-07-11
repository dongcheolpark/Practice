#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <utility>
#include <queue>
#include <map>
#include <vector>

#define INF 100

using namespace std;

int n,m,x;
int graph[1000][1000];
bool v[1000];
int d[1000];
int res[1000];

int minindex() {
    int min = INF;
    int index = 0;
    for(int i = 0;i<n;i++) {
        if(d[i] < min && !v[i]) {
            min = d[i];
            index = i;
        }
    }
    return index;
}

int dijkstra(int start) {
    for(int i = 0;i<n;i++) {
        d[i] = graph[start][i];
    }
    v[start] = true;

    for(int i = 0;i<n-2;i++) {
        int current = minindex();
        v[current] = true;
        for(int j = 0;j<n;j++) {
            if(!v[j]) {
                if(d[current] + graph[current][j] < d[j]) {
                    d[j] = d[current] + graph[current][j];
                }
            }
        }
    }
    return d[x];
}

int main() {
    scanf("%d %d %d",&n,&m,&x);
    for(int i = 0;i<n;i++) {
        for(int j = 0;j<n;j++) {
            graph[i][j] = INF;
        }
    }
    for(int i = 0;i<m;i++) {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        graph[a-1][b-1] = c;
    }
    for(int i = 0;i<n;i++) {
        res[i] += dijkstra(i);
        for(int i = 0;i<n;i++) v[i] = false;
        if(i == x) {
            for(int i = 0;i<n;i++) {
                res[i] += d[i];
            }
            continue;
        }
    }
    int max = 0;
    for(int i = 0;i<n;i++) {
        max = res[i];
    }
    printf("%d",max);
}