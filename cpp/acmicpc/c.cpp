#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int a;
    cin>>a;
    int x = a;
    for(int i = 0;i<3;i++) x/=10;
    a = (a-x*pow(10,3))*10 + x;
    cout<<a;
}