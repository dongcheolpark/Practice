#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ToInteger(char ch) {
    switch(ch) {
        case 'r':
            return 1;
        case 's':
            return 0;
        case 'p':
            return 2;
        case '9':
            printf("다음에 또 만나요.\n");
            exit(0);
        default :
            printf("잘못 입력하셨습니다. 다시 입력해주세요\n");
            return -1;
    }
}

char* ToHanguel(int num) {
    switch(num) {
        case 0:
            return "가위";
        case 1:
            return "바위";
        case 2:
            return "보";
    }
}

char* compare_num(int a, int b) {
    if(a == b) { //비김
        return "당신이 비겼습니다.";
    }
    else if((a == 0 && b == 2) || (a == 2 && b == 1) || (a == 1 && b == 0)) { //이김
        return "당신이 이겼습니다.";
    }
    else return "당신이 졌습니다.";//짐 
}

int main() {
    char ch = 0;
    printf("가위(s) 바위(r) 보(p) 게임을 시작합니다.(게임종료 : 9)\n");
    while(1){
        printf("가위 바위 보를 선택하세요. : ");
        ch = getchar();
        while(getchar() != '\n');
        int num = ToInteger(ch);
        if(num == -1) continue;
        srand((unsigned int)time(NULL));
        int random_num = rand()%3;
        printf("당신은 %s를 냈고 컴퓨터는 %s를 냈습니다.\n",ToHanguel(num),ToHanguel(random_num));
        puts(compare_num(num,random_num));
    }
}