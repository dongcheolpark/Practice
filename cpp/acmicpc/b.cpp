#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int s;

void binary(int n, int i)
{
	if (i == 0 && n <= 3)
	{
		s = 1;
		if (n == 1) s = 0;
	}
	else s = 2;
	for (int i = s; i >= 0; i--)
	{
		if (n >= pow(2, i))
		{
			printf("1");
			n -= int(pow(2, i));
		}
		else printf("0");
	}
	
	int res = 0;
	q1.pop();
	q2.pop();
	res = func();
}

int main(void)
{
	
}