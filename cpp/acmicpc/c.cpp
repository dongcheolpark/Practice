#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v({1,2,3,4,5}); // 리스트를 활용한 벡터 초기화

    for(auto i = v.begin(); i < v.end(); i++) {
        cout<< *i << endl; // 반복자를 이용한 순차탐색
    }

    for(auto i = v.rbegin(); i < v.rend(); i++) {
        cout<< *i << endl; // 역반복자를 이용한 역순차탐색
    }
}