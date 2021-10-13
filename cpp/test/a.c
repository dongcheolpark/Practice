#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

typedef struct student
{
	char * name;
	char * email;
	char * phone;
}student;

student data[10];

void print_student(int i) {
	printf("name : %s\nemail : %s\nphone : %s\n\n",data[i].name,data[i].email,data[i].phone);
}

void search_name(char * name) {
	for(int i = 0;i<N;i++) {
		if(strcmp(name,data[i].name) == 0) {
			print_student(i);
		}
	}
}
void search_all() {
	for(int i = 0;i<N;i++) {
		print_student(i);
	}

}


int main() {
	for(int i = 0;i<N;i++) {
		char * tmp;
		tmp = (char *)malloc(sizeof(char)*41);
		scanf("%s",tmp);
		data[i].name = tmp; 
		tmp = (char *)malloc(sizeof(char)*41);
		scanf("%s",tmp);
		data[i].email = tmp; 
		tmp = (char *)malloc(sizeof(char)*41);
		scanf("%s",tmp);
		data[i].phone = tmp; 
	}

	puts("1. 이름검색, 2.전체검색");
	int a;
	scanf("%d",&a);
	if(a == 1) {
		char tmp[40];
		printf("이름 :");
		scanf("%s",tmp);
		search_name(tmp);
	}
	else if(a== 2) {
		search_all();
	}
	else {
		puts("잘못입력하셨습니다.");
	}
	return 0;
}