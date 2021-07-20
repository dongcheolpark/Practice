#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int n,res1 = 0,res2 = 0,res3 = 0;
int ** arr;

int check(int x,int y, int num) {
	int a = arr[x][y];
	for(int i = x;i<x+num;i++) {
		for(int j = y;j<y+num;j++) {
			if(arr[i][j] != a) {
				a = 2;
				goto RESULT;
			}
		}
	}
	RESULT:
	return a;
}

void func(int x,int y,int num) {
	int a = check(x,y,num);
	if(a != 2 || num == 1) {
		if(a == -1) res1++;
		else if(a == 0) res2++;
		else if(a == 1) res3++;
		return;
	}
	for(int i = x;i<x+num;i+=num/3) {
		for(int j = y;j<y+num;j+=num/3) {
			func(i,j,num/3);	
		}
	} 
}

int main() {
	scanf("%d",&n);
	arr = new int*[n];
	for(int i = 0;i<n;i++) {
		arr[i] = new int[n];
	}
	for(int i = 0;i<n;i++) {
		for(int j = 0;j<n;j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	func(0,0,n);
	printf("%d\n%d\n%d",res1,res2,res3);
}

