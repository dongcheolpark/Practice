#include <stdio.h>
#include <stdbool.h>

int n = 10; // size of array
void sort(bool);
bool compare_cities(char *, char *);
bool compare_cities_descending(char *, char *);
void switch_str(char **, char **);

char *sort_array[10] = {
    "Seoul",
    "Tokyo",
    "NewYork",
    "London",
    "Paris",
    "LosAngeles",
    "Toronto",
    "Berlin",
    "Melbourne",
    "Dubai"}; //List of cities

void sort(bool a)
{
    bool (*func)(char *,char *) = compare_cities; // Ascending sort
    if (!a)
        func = compare_cities_descending; // descending sort
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (func(sort_array[i], sort_array[j]))
            {
                switch_str(&sort_array[i], &sort_array[j]);
            }
        }
    }
}

bool compare_cites(char *a, char *b)
{ // compare strings
    for (int i = 0; a[i] != '\0' || b[i] != '\0'; i++)
    {
        if (a[i] > b[i])
        {
            return true;
        }
        else if (a[i] < b[i])
        {
            return false;
        }
    }
    return false;
}

bool compare_cities_descending(char *a, char *b)
{
    return !compare_cities(a, b);
}

void switch_str(char **a, char **b)
{ // swap strings
    char *tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    printf("Bubble Sort (global big cities)\n");
    printf("--------------------------------\n");
    sort(1);
    printf("[Ascending order] : ");
    for (int i = 0; i < n; i++)
    {
        if (i == 9)
        {
            puts(sort_array[i]);
            break;
        }
        printf("%s-", sort_array[i]);
    }
    puts("");
    sort(0);
    printf("[Descending order] : ");
    for (int i = 0; i < n; i++)
    {
        if (i == 9)
        {
            puts(sort_array[i]);
            break;
        }
        printf("%s-", sort_array[i]);
    }
    printf("--------------------------------\n");
}