#include<stdio.h>


int main()
{
    char a[100];
    char *p;
    
    printf("enter a string \n");
    gets(a);
    p = a;

    int i = 0;

    while(*p != '\0')
    {
        i++;
        p++;
    }

    printf("lenght of string %s is %d\n", a, i);
    
}