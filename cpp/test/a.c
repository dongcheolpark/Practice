#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>

void day_cal(int, double, double, char, int);
void PIBW_cal(double w, double h, char g);
void exercise(int age);
char* random_string(char ** str, int size, int num);

int main(void)
{
	int age, act,num;
	double weight, height;
	char gender;
	printf("========================================\n");
	printf("==1. 내 체중과 표준체중 구하기=========\n");
	printf("==2. 일일 권장섭취칼로리 구하기  =======\n");
	printf("==3.  적합한 운동 찾기     ===========\n");
	printf("==4. 그만두기              =============\n");
	printf("========================================\n");

	printf("◈원하는 내용은?");
	scanf_s("%d", &num);
	
	do {
		rewind(stdin);
		if (num == 1)
		{
			printf("성별(M or W)을 입력하십시오.\n");
			gender = getchar();
			rewind(stdin);
			printf("나이,몸무게(kg),키(m)를 입력하십시오.\n");
			scanf_s("%d, %lf, %lf", &age, &weight, &height);
			PIBW_cal(weight, height, gender);
		}
		else if (num == 2)
		{
			printf("성별(M or W)을 입력하십시오.\n");
			gender = getchar();
			rewind(stdin);
			printf("나이,몸무게(kg),키(m)를 입력하십시오.\n");
			scanf_s("%d, %lf, %lf", &age, &weight, &height);
			printf("평소 활동하는 정도의 번호를 입력하시오(ex:1번: 좌업생활,2번:가벼운활동,3번:보통의활동,4번:적극적인활동,5번:매우활동적)\n");
			scanf_s("%d", &act);
			day_cal(age, weight, height, gender, act);
		}
		else if (num == 3)
		{
			
			printf("나이를 입력하십시오.\n");
			scanf_s("%d", &age);
			exercise(age);
		}

		else {
			break;
		}
		rewind(stdin);
		printf("\n>> 결과를 확인했으면 아무키나 누르세요.");
		getchar();
		system("cls");
	}
	while (num != 4);

	return 0;
}

void day_cal(int a, double w, double h, char g, int n)
{
	double cal, daycal;
	if (g == 'M')
	{
		cal = 66 + (13.7 * w) + (5 * h * 100) - (6.8 * a);
	}
	else
	{
		cal = 665 + (9.6 * w) + (1.8 * h * 100) - (4.7 * a);
	}

	switch (n)
	{
	case 1:
		daycal = cal * 1.2;
		printf("일일 권장 칼로리 섭취량은:%lf", daycal);
		break;
	case 2:
		daycal = cal * 1.375;
		printf("일일 권장 칼로리 섭취량은:%lf", daycal);
		break;
	case 3:
		daycal = cal * 1.555;
		printf("일일 권장 칼로리 섭취량은:%lf", daycal);
		break;
	case 4:
		daycal = cal * 1.725;
		printf("일일 권장 칼로리 섭취량은:%lf", daycal);
		break;
	case 5:
		daycal = cal * 1.9;
		printf("일일 권장 칼로리 섭취량은:%lf", daycal);
		break;
	}
}

void PIBW_cal(double w, double h, char g)
{
	double nw, fatness;
	if (g == 'M')
	{
		nw = h * h * 22;
	}
	else
	{
		nw = h * h * 21;
	}

	fatness = (w / nw) * 100;

	if (fatness < 90)
		printf("저체중입니다. 표준 체중은 %.2lf kg입니다. \n", nw);
	else if (fatness >= 90 && fatness < 110)
		printf("정상체중입니다.\n");
	else if (fatness >= 110 && fatness < 120)
		printf("과체중입니다. 표준 체중은 %.2lf kg입니다. \n", nw);
	else if (fatness >= 120 && fatness < 130)
		printf("경도비만입니다. 표준 체중은 %.2lf kg입니다. \n", nw);
	else if (fatness >= 130 && fatness < 160)
		printf("중정도비만입니다.표준 체중은 %.2lf kg입니다. \n", nw);
	else
		printf("고도비만입니다.표준 체중은 %.2lf kg입니다. \n", nw);
}

void exercise(int age)
{
	const char* ex0[4] = {"걷기","공놀이","수영","스트레칭"};
	const char *ex1[6] = { "자전거", "달리기", "수영","조깅","축구","푸쉬업" };
	const char *ex2[9] = { "팔굽혀펴기","윗몸일으키기","푸쉬업","배드민턴","농구","축구","자전거","달리기" };
	const char* ex3[5] = { "댄스","산책","요가","체조","단전 호흡" };
	srand(time(NULL));
	if (age>=0&&age<9) 
	{
		const char* str1 = ex0[rand() % 4];
		const char* str2 = ex0[rand() % 4];
		printf("추천 운동은 %s, %s입니다.\n", str1, str2); 
	}
	else if(age>=9&&age<19) 
	{
		const char* str1 = ex1[rand() % 6];
		const char* str2 = ex1[rand() % 6];
		const char* str3 = ex1[rand() % 6];
		printf("추천 운동은 %s, %s, %s입니다.\n", str1, str2, str3);

	}
	else if(age>=19&&age<60) 
	{
		const char* str1 = ex2[rand() % 9];
		const char* str2 = ex2[rand() % 9];
		const char* str3 = ex2[rand() % 9];
		printf("추천 운동은 %s, %s, %s입니다.\n", str1, str2, str3);
	}
	else
	{
		const char* str1 = ex3[rand() % 5];
		const char* str2 = ex3[rand() % 5];
		const char* str3 = ex3[rand() % 5];
		printf("추천 운동은 %s, %s, %s입니다.\n", str1, str2, str3);
	}
}

char * random_string(char ** str,int size,int num) {
	srand(time(NULL));
	char res[50];
	int arr[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for(int i = 0;i<num;i++) {
		do{
			int a = rand()%size;
			if (arr[a]) continue;
			else {
				arr[a] = 1;
				strcat_s(res, ", ");
				break;
			}
		}
		while(1);
	}
	return res;
}





