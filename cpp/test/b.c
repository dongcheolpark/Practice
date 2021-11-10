#include <stdio.h>

typedef struct 
{
	char name[20];
	int id;
	int age;
	int salary;
}employee;

int main() {
	employee data;
	FILE *ofp;
	ofp = fopen("employee.txt", "w");
	int i;
	for(i = 0;scanf("%s %d %d %d",data.name,&data.id,&data.age,&data.salary) != EOF;i++) {
		fprintf(ofp,"%s %d %d %d\n",data.name,data.id,data.age,data.salary);
	}
	fclose(ofp);
	return 0;
}


