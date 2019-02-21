#include<stdio.h>
#include<conio.h>
int main()
{
    const char end = '.';
    int words = 1;
    printf("please enter a sentence: \n");
    char c = getchar();
    while (c != end)
    {
    c = getchar();
    if (c == ' ')
    words++;
    }
    printf("the total number of words is %d", words);
    getchar();
    getch();
}
