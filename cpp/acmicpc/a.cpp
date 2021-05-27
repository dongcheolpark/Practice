#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int main() {
    char a;
    int res;
    while(scanf("%c",a) != EOF) {
        if(a == ' ') {
            res++;
        }
    }
    printf("%d",res);
}