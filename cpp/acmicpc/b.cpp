#include <cstdio>
#include <queue>

using namespace std;

queue<int> q1,q2;

int resultCal(queue<int> &q) {
	int res = 0;
	while(q.empty()) {
		res += q.front();
		q.pop();
	}
	return res;
}

int func() {
	int fr1 = q1.front(),fr2 = q2.front();
	if(q1.empty()) {
		return resultCal(q1);
	}
	else if(q2.empty()) {
		return resultCal(q2);
	}
	
	int res = 0;
	q1.pop();
	q2.pop();
	res = func();
}

int main() {
	int n,tmp;
	for(int i = 0;i<n;i++) {
		scanf("%d",&tmp);	
		q1.push(tmp);
	}
	for(int i = 0;i<n;i++) {
		scanf("%d",&tmp);	
		q2.push(tmp);
	}
}