#include<stdio.h>

void matrixEntry(int *a, int x, int y)
{
    printf("enter the matrix \n");
    for(int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            scanf("%d", (a+i) + j);
}


int main()
{
    int a[20][20];
    int b[20][20];
    int sum[20][20];
    int x, y;
    int *p1, *p2, *p3;
    p1 = &a[0][0];
    p2 = &b[0][0];
    p3 = &sum[0][0];

    printf("enter the matrix rows and coloumns \n");
    scanf("%d \n %d", &x, &y);

    matrixEntry(&a[0][0], x, y);
    matrixEntry(&b[0][0], x, y);
        
    for(int i = 0; i < x; i++)
        for(int j = 0; j < y; j++)
        {
            *(p3+i)+j = *(p2+i)+j + *(p2+i)+j;
            printf("%d", sum[i][j]);
            if(j==y-1)
                printf("\n");
        }


         
    

}