#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <list>
#include <vector>

using namespace std;

int check(int x,int y) {
    
}

int main() {
    int n,m;
    cin>>n>>m;
    int ** arr = new int*[n];
    for(int i = 0;i<n;i++) {
        arr[i] = new int[m];
    }
    for(int i = 0;i<n;i++) {
        for(int j = 0;j<m;j++) {
            cin>>arr[i][j];
        }
    }
    for(int i = 0;i<n;i++) {
        for(int j = 0;j<m;j++) {
            check(i,j);
        }
    }

}
