#include <stdio.h>

enum cost_value {dollar,won};

typedef union cost_va {
	double dollar;
	int won;
}const_va;

typedef struct product
{
	char * name;
	const_va cost;
	enum cost_value cost_v;
}product;


int main() {
	const product product_list[6] = {
		{"pmp",{.won = 600000,},won},
		{"mp3",{.won = 153000,},won},
		{"smartphone",{.dollar = 520.40},dollar},
		{"tv",{.dollar = 430.20},dollar},
		{"navigator",{.won = 350000,},won},
		{"laptop",{.dollar = 1950.00},dollar}
	};
	int cost,exchange;
	puts("보유금액과 환율을 입력하세요.");
	printf("보유금액 : ");
	scanf("%d",&cost);
	printf("환율 : ");
	scanf("%d",&exchange);
	for(int i = 0;i<6;i++) {
		int won;
		if(product_list[i].cost_v == dollar) {
			won = (int)(product_list[i].cost.dollar * exchange);
		}
		else {
			won = product_list[i].cost.won;
		}
		if(won < cost) {
			printf("%s %d원\n",product_list[i].name,won);
		}
	}
}