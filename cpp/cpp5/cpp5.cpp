#include <cstdio>
#include <algorithm>
using namespace std;

class pt{
    public:
    int x;
    int y;
};

bool compare(pt a,pt b) {
    if(a.x == b.x) {
        return a.y < b.y   
    }
}

int main() {
    int n;
    pt * arr[100000];
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        arr[i] = new pt();
        scanf("%d %d",arr[i]->x,arr[i]->y);
    }
}
