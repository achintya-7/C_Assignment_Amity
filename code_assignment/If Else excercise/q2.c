#include<stdio.h>
int main()
{
    int a,b, c;
    printf("enter numbers \n");
    scanf("%d %d %d", &a, &b, &c);

    printf("max is %d \n ", a>b ? a>c ? a : c : b>c ? b : c );
}
