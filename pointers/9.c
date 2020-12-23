#include<stdio.h>


int main()
{
    int a[20][20];
    int x, y;
    int *p;
    p = &a[0][0];

    printf("enter the matrix rows and coloumns \n");
    scanf("%d \n %d", &x, &y);

    for(int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            scanf("%d", (p+i) + j);
        

    for(int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
        {
            printf("%d ", *(p+i) + j);
            if(j==y-1)
                printf("\n");
        }
        
    

}
