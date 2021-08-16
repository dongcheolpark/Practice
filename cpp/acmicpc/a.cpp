#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <queue>
#include <list>
#include <vector>

using namespace std;

string res;

void func(int n,int m) {
    queue<pair<int,string > > tmp;
    if(n == m) {
        return;
    }
    int a = n;
    tmp.push(make_pair(a,""));
    while(!tmp.empty()) {
        int first = tmp.front().first;
        string second = tmp.front().second;
        if(first == m) {
            res = second;
            return;
        }
        auto lam = [&a,&second,&tmp] (string x) {
            string str = second + x;
            tmp.push(make_pair(a,str));
        };
        a = first*2%10000;
        lam("D"); //D

        a = first-1;
        if(a < 0) a = 9999; 
        lam("S"); //S 
        
        a = first;
        int i = 0,x = a;
        for(;i<3;i++) x/=10;
        a = (a-x*pow(10,3))*10 + x;
        lam("L"); //L

        a = first;
        a = a/10 + a%10*pow(10,3);
        lam("R"); //R
        tmp.pop();
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--) {
        int a,b;
        cin>>a>>b;
        func(a,b);
        cout<<res<<'\n';
        res.clear();
    }
}