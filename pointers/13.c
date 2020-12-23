#include<stdio.h>


int main()
{
    char a[100];
    char b[100];
    char *p;
    char *q;
    
    printf("enter a string \n");
    gets(a);
    p = a;
    q = b;

    

    while(*p != '\0')
    {
        *q = *p;
        p++;
        q++;
    }
    *q = '\0';

    printf("the copied string is %s \n", b);
    
    
}