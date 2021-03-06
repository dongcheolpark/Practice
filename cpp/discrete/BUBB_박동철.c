#include <stdio.h>
#include <stdbool.h>

int n = 10; // size of array
void sort(bool);
bool compare_mammals(char*,char*);
bool compare_mammals_descending(char*,char*);
void switch_str(char**,char**);

char* sort_array[10] = {
    "Humman",
    "Cow",
    "Dog",
    "Coyote",
    "Chimpanzee",
    "Panda",
    "Squirrel",
    "Leopard",
    "Sheep",
    "Horse"
}; //List of Mammals

void sort(bool a)
{
    bool (*func)(char *, char *) = compare_mammals; // Ascending sort
    if (!a) func = compare_mammals_descending; // descending sort
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (func(sort_array[j], sort_array[j+1]))
            {
                switch_str(&sort_array[j], &sort_array[j+1]);
            }
        }
    }
}

bool compare_mammals(char* a, char* b) { // compare strings
    for(int i = 0;a[i]!='\0'||b[i] != '\0';i++) {
        if(a[i]>b[i]) {
            return true;
        }
        else if(a[i] < b[i]) {
            return false;
        }
    }
    return false;
}

bool compare_mammals_descending(char * a,char * b) {
    return !compare_mammals(a,b);
}

void switch_str(char ** a,char ** b) { // swap strings
    char * tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    printf("Bubble Sort (animals - mammals)\n");
    printf("--------------------------------\n");
    sort(1);//ascending sort
    printf("[Ascending order] : ");
    for(int i = 0;i<n;i++) {
        if(i == 9) {
            puts(sort_array[i]);
            break;
        }
        printf("%s-",sort_array[i]);
    }
    puts("");
    sort(0);//descending sort
    printf("[Descending order] : ");
    for(int i = 0;i<n;i++) {
        if(i == 9) {
            puts(sort_array[i]);
            break;
        }
        printf("%s-",sort_array[i]);
    }
    printf("--------------------------------\n");
}