#include<stdio.h>
int main()
{
    int n;

    printf("enter number \n");
    scanf("%d", &n);

    for(int i=1; i <= n; i++)
    {
        for(int j=1; j <= (n-i); j++ )
            printf(" ");

        for(int k = 1; k<= ((2*i)-1); k++)
        {
           if(k == 1 || k == (2*i - 1) || i == n)
             {
               printf("*");
             }
           else
             {
                printf(" ");
             }
            
        }
        printf("\n");
    }
}
    