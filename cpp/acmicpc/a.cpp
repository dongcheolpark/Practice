#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <list>
#include <vector>

using namespace std;

list<int> res;

void print() {
    char tmp[4] = {'D','S','L','R'};
    for(auto item = res.begin();item!=res.end();item++) {
        cout<<tmp[*item];
    }
    cout<<"\n";
}

bool func(int n,int m) {
    auto * tmp = new list<int>;
    if(n == m) {
        
    }
    int a = n*2%10000;
    
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    while(n--) {
        int a,b;
        cin>>a>>b;
        func(a,b);
        print();
        res.clear();
    }
}