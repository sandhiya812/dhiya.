#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
    char str[MAX_SIZE];
    int i, words;
    printf("Enter any string: ");
    gets(str);
    i = 0;
    words = 1;
    while(str[i] != '\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            words++;
        }
        i++;
    }
    printf("Total number of words = %d", words);
    return 0;
    getch();
}
