#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

<<<<<<< HEAD
int main() {
}
=======
vector<int> v;

int check(int num) { // 있으면 원소 위치, 없으면 -1 리턴
    auto a = find(v.begin(),v.end(),num);
    if(a == v.end()) {
        return -1;
    }
    else return a-v.begin();
}

void empty() {
    while(!v.empty()) {
        v.pop_back();
    }
}

int main() {
    int n;
    scanf("%d",&n);
    while(n--) {
        char tmp[10];
        int num;
        scanf("%s",tmp);
        if(!strcmp(tmp,"add")) {
            scanf("%d",&num);
            if(check(num) == -1) v.push_back(num);
        }
        else if(!strcmp(tmp,"remove")) {
            scanf("%d",&num);
            int a = check(num);
            if(a != -1) {
                v.erase(v.begin() + a);
            }
        }
        else if(!strcmp(tmp,"check")) {
            scanf("%d",&num);
            if(check(num) == -1) {
                puts("0");
            }
            else {
                puts("1");
            }
        }
        else if(!strcmp(tmp,"toggle")) {
            scanf("%d",&num);
            int a = check(num);
            if(a == -1) {
                v.push_back(num);
            }
            else {
                v.erase(v.begin() + a);
            }
        }
        else if(!strcmp(tmp,"all")) {
            empty();
            for(int i =0;i<20;i++) v[i] = i;
        }
        else if(!strcmp(tmp,"empty")) { 
            empty();
        }
    }
}
>>>>>>> 61e0503018b8defd2514c091577019e53b778a71
