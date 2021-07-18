#include <cstdio>
#include <cstring>
#include <utility>
#include <cmath>

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	while (n--) {
		double x1,x2,y1,y2,r1,r2;
		scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&r1,&x2,&y2,&r2);
		float r = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
		printf("%lf %lf\n",r,abs(r2-r1));
		if(r < abs(r2-r1)) {
			puts("0");
		}
		else if (r > abs(r2-r1)) {
			puts("2");
		}
		else {
			puts("1");
		}
	}
	return 0;
}