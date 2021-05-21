#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

short arr[1000001];

int func2(int n) {
    if(arr[n]) return arr[n];
    if(n <= 2) return n;
    int tmp = func2(n-1) + func2(n-2);
    arr[n] = tmp%15746;
    return arr[n];
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d\n",func2(n));
}