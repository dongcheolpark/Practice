#include <stdio.h>
#include <time.h>

char * wday[7] = {"월","화","수","목","금","토","일"};

int main() {
	struct tm *t;

	time_t now;

	now = time(NULL);

	t = localtime(&now);

	printf("오늘은 %d년 %d월 %d일 %s요일입니다.",t->tm_year + 1900, t->tm_mon,t->tm_mday,wday[t->tm_wday]);
}