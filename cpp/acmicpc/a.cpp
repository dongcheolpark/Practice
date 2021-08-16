#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <queue>
#include <list>
#include <vector>

using namespace std;

<<<<<<< HEAD
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
=======

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
 
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
 
int main(void)
{
    int t, m, n, x, y, i, j;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d %d %d %d", &m, &n, &x, &y);
        int limit = lcm(m, n);
        for (j = x; j <= limit; j += m) {
            int temp = (j%n == 0) ? n : j % n;
            if (temp == y) {
                printf("%d\n", j);
                break;
            }
        }
        if (j > limit)
            printf("-1\n");
>>>>>>> 30b5a133d3c52f1532511016f2ddd24e49adf14e
    }
    return 0;
}
