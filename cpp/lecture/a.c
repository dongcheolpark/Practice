#include <stdio.h>
#define   N   5 

void grade_array(int score[], char grade[], int size) {
    for(int i = 0;i<size;i++) {
        if(score[i] <= 100 && score[i] >= 90) {
            grade[i] = 'A';
        }
        else if(score[i] <= 89 && score[i] >= 80) {
            grade[i] = 'B';
        }
        else if(score[i] <= 79 && score[i] >= 70) {
            grade[i] = 'C';
        }
        else if(score[i] <= 69 && score[i] >= 60) {
            grade[i] = 'D';
        }
        else {
            grade[i] = 'F';
        }
    }
}
int main(void)
{
    int arr[100];
    diff_array(arr,1,7,10);
    for(int i = 0;i<10;i++) {
        printf("%d ",arr[i]);
    }
}

