#include<stdio.h>


int main()
{
    char a[100];
    char b[50];
    char *p;
    char *q;
   
    
    printf("enter 1st string \n");
    gets(a);
    printf("enter 2nd string \n");
    gets(b);
    
    p = a;
    q = b;
       

    while(*p)
    {
        p++;
    }
    while(*q)
    {
        *p = *q;
        p++;
        q++;
    }
    *p = '\0';


    printf("the string is %s \n", a);
    
    
}