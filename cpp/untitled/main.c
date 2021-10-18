#include <stdio.h>

struct info{
    char name[20]; // 이름
    double score; // 평점 평균
    int credit; // 취득 학점
};

void input_data(struct info *students, int count){
    for(int i=0; i<count; i++){
        printf("이름 : ");
        scanf("%s", students[i].name);
        printf("평점 평균 : ");
        scanf("%lf", &students[i].score);
        printf("취득 학점 : ");
        scanf("%d", &students[i].credit);
    }
}

void scholarship(struct info *students, int count){
    for(int i=0; i<count; i++){
        if((students[i].credit >= 20)&&(students[i].score >= 4.3)){
            printf("장학생 이름 : %s\n", students[i].name);
            printf("평점 평균 : %.2lf\n", students[i].score);
            printf("취득 학점 : %d\n", students[i].credit);
        }
    }
}

int main(void)
{
    struct info students[5]; // 5명의 학생
    input_data(students, 5); // 이름, 평점 평균, 취득 학점을 입력받는 함수
    scholarship(students, 5); // 장학생의 이름, 평점 평균, 취득 학점을 출력하는 함수
    return 0;
}