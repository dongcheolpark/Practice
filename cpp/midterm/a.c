#include <stdio.h>

struct a
{
	int x;
	int y;
	union {
		int k;
		double dollar;
	};
};


int main() {
	struct a b = {,,.dollar=99.99};
}