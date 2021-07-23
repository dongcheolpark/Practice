#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <list>
#include <vector>

using namespace std;

vector<vector<pair<int,int> >* > tetros;
int ** arr;
int n,m;

vector<pair<int,int> > * rotate(vector<pair<int,int> > * v) {
    auto * tmp = new vector<pair<int,int> >;
    for(auto item : *v) {
        tmp->push_back(make_pair(-item.second,item.first));
    }
    return tmp;
}

void init() {
    auto * tmp  = new vector<pair<int,int> >;
    tmp->push_back(make_pair(0,0));
    tmp->push_back(make_pair(0,1));
    tmp->push_back(make_pair(0,2));
    tmp->push_back(make_pair(0,3));
    tetros.push_back(tmp); //1자
    tmp  = new vector<pair<int,int> >;
    tmp->push_back(make_pair(0,0));
    tmp->push_back(make_pair(0,1));
    tmp->push_back(make_pair(0,2));
    tmp->push_back(make_pair(1,2));
    tetros.push_back(tmp); // L자
    tmp  = new vector<pair<int,int> >;
    tmp->push_back(make_pair(0,0));
    tmp->push_back(make_pair(0,1));
    tmp->push_back(make_pair(0,2));
    tmp->push_back(make_pair(-1,2));
    tetros.push_back(tmp); //대칭L자
    tmp  = new vector<pair<int,int> >;
    tmp->push_back(make_pair(0,0));
    tmp->push_back(make_pair(0,1));
    tmp->push_back(make_pair(1,1));
    tmp->push_back(make_pair(1,0));
    tetros.push_back(tmp); //네모
    tmp  = new vector<pair<int,int> >;
    tmp->push_back(make_pair(0,0));
    tmp->push_back(make_pair(0,1));
    tmp->push_back(make_pair(1,1));
    tmp->push_back(make_pair(1,2));
    tetros.push_back(tmp); //N자
    tmp  = new vector<pair<int,int> >;
    tmp->push_back(make_pair(0,0));
    tmp->push_back(make_pair(0,1));
    tmp->push_back(make_pair(-1,1));
    tmp->push_back(make_pair(-1,2));
    tetros.push_back(tmp); //대칭N자
    tmp  = new vector<pair<int,int> >;
    tmp->push_back(make_pair(0,0));
    tmp->push_back(make_pair(0,1));
    tmp->push_back(make_pair(1,1));
    tmp->push_back(make_pair(0,2));
    tetros.push_back(tmp); //T자
    vector<vector<pair<int,int > >* > v2;
    v2.assign(tetros.begin(),tetros.end());
    for(auto &item : v2) {
        int i = 3;
        vector<pair<int,int> > * tmp = item;
        while(i--) {
            tmp = rotate(tmp);
            tetros.push_back(tmp);
        }
    }
}

int check(int x,int y) {
    int res = 0;
    int sum = 0;
    for(auto &item : tetros) {
        sum = 0;
        //cout<<item->size()<<"\n";
        for(auto item2 : *item) {
            if(x+item2.first < 0 || x+item2.first >= n ||y+item2.second < 0 || y+item2.second >= m) continue;
            sum += arr[x+item2.first][y+item2.second];
        }
        if(sum > res) res = sum;
    }
    return res;
}

int main() {
    cin>>n>>m;
    arr = new int*[n];
    init();
    for(int i = 0;i<n;i++) {
        arr[i] = new int[m];
    }
    for(int i = 0;i<n;i++) {
        for(int j = 0;j<m;j++) {
            cin>>arr[i][j];
        }
    }
    int res = 0;
    for(int i = 0;i<n;i++) {
        for(int j = 0;j<m;j++) {
            int sum = check(i,j);
            if(res < sum) res = sum;
        }
    }
    printf("%d",res);
}
