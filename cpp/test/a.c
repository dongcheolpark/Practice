#include <stdio.h>

int * max(int *a) {
    int b = *a;
    int * c = a;
    for (int* i = a + 1; i < 100; i++) {
        if (i == 0) {
            break;
        }
        else if (i > b) {
            b = i;
            c = i;
        }
    }
    return c;
}
int * min(int *a) {
    int b = *a;
    int * c = a;
    for (int* i = a + 1; i < 100; i++) {
        if (i == 0) {
            break;
        }
        else if (i < b) {
            b = *i;
            c = i;
        }
    }
    return c;
}

int main() {
    /*1) MAX() 함수 이용
        - 인자: int형 배열 ar - 배열 표기[] 사용금지
        - 배열에서 최대값의 주소를 반환한다. - 반환 값 : int형 포인터 즉 주소
        2) MIN() 함수 이용
        - 인자: int형 배열 ar - 배열 표기[] 사용금지
        - 배열에서 최소값의 주소를 반환한다. - 반환 값 : int형 포인터 즉 주소*/
    /*main 함수에서는
 - 사용자로부터 정수 N을 입력 받는다. 아래 과정을 N번 반복한다. ?사용자로부터 정수를 입력 받는다.
    0이 되면 종료한다. 배열 ar의 크기는 100. ?MAX 함수를 호출한다. MIN 함수를 호출한다. 
    ?최대값과 최소값 사이에 위치한 정수를 사용자로부터 입력받은 순서대로 출력한다. ?각 줄에서 최대값과 최소값은 한 개씩만 있다. 
    ?화면에 출력할 정수가 없으면 none을 출력한다. */
    int n;
    scanf("%d", &n);
	while(n--){
        int ar[100];
		int * p = ar;
        for (p = ar; p < ar + 99; p++) {
            scanf("%d", p);
        }
        int *a = min(p), *b = max(p);
        for (int *j = a + 1; j < b; j++) {
            printf("%d", *j);
        }
    }
    return 0;
}