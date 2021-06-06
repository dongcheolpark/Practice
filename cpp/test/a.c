#include <stdio.h>

struct data {
	int age;
	int act;
	double weight;
	double height;
	char gender;
} typedef data;

int main() {
	data person;	
	person.age = 10;
	scanf("%d",&person.age);
	printf("%d",person.age);
}