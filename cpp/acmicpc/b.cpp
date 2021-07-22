#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <climits>
#include <utility>
#include <list>

using namespace std;

int arr[10];

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n,m;
	cin>>n;
	list<int> li;
	while(n--) {
		bool reverse = false;
		string order;
		cin>>order;
		cin>>m;
		m = order.size();
		string str;
		li.clear();
		cin>>str;
		int tmp = 0,chk = false;
		for(int i = 0;i<str.size();i++) {
			if(str[i] >= '0' && str[i] <='9') {
				tmp *= 10; 
				tmp += str[i]-'0';
				chk = true;
			}
			else {
				if(chk) {
					li.push_back(tmp);
					tmp = 0;
					chk = false;
				}
			}
		}
		chk = false;
		try {
		for(int i = 0;i<m;i++) {
			if(order[i] == 'R') {
				if(reverse == true) reverse = false;
				else reverse = true;
			}
			else {
				if(reverse) {
					li.pop_back();
				}
				else {
					if(li.empty()) {
						chk = true;
						cout<<"error"<<"\n";
						break;
					}
					li.pop_front();
				}
			}
		}
		}
		catch(int a) {
			chk = true;
			cout<<"error"<<"\n";
		}
		if(chk) continue;
		else {
			cout<<"[";
			if(li.empty()) {
				cout<<"0]";
				continue;
			}
			if(!reverse) {
				for(auto i = li.begin();i != li.end();i++) {
					cout<<*i;
					if(i != --li.end()) {
						cout<<',';
					}
				}
			}
			else {
				for(auto i = li.rbegin();i != li.rend();i++) {
					cout<<*i;
					if(i != --li.rend()) {
						cout<<',';
					}
				}
			}
			cout<<"]"<<'\n';
		}
	}
}
