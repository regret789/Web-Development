#include<stdio.h>

int main()
{
    char d;
    printf("Enter  a character");
    scanf("%c",&d);
    d=getchar();
    printf("The letter is:");
    putchar(d);
    return 0;
}