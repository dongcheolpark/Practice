#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

struct time
{
    int begin;
    int end;
    bool operator<(time &b) {
        if(this->end == b.end) {
            return this->begin < b.begin;
        }
        else return this->end < b.end;
    }
};

vector<time> arr;

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        time tmp = NULL; 
        scanf("%d %d",tmp.begin,tmp.end);
        arr.push_back(tmp);
    }

    sort(arr.begin(),arr.end());

}