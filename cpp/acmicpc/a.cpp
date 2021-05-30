#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;



int main() {
    int n,m;
    scanf("%d\n",&n);
    while(n--) {
        scanf("%d\n",&m);
        int cnt = 0;
        priority_queue<int, vector<int>, greater<int>> pq_asc;
        priority_queue<int, vector<int>> pq_des;
        while(m--) {
            char ch;
            int tmp;
            scanf("%c %d\n",&ch,&tmp);
            if(cnt == 0) {
                while(!pq_asc.empty()) pq_asc.pop();
                while(!pq_des.empty()) pq_des.pop();
            }
            if(ch == 'I') {
                pq_des.push(tmp);
                pq_asc.push(tmp);
                cnt++;
            }
            else {
                if(!cnt) continue;
                if(tmp == -1) {
                    pq_des.pop();
                    cnt--;
                }
                else {
                    pq_asc.pop();
                    cnt--;
                }
            }
        }
        if(cnt == 0) printf("EMPTY\n");
        else printf("%d %d\n",pq_des.top(),pq_asc.top());
    }
}