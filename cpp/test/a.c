#include <stdio.h>

struct a {
	int x;
	int y;
};

int main() {
	struct a i = {1,1};
	struct a j = i;
	printf("%d %d",j.x,j.y);
}