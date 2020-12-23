#include<stdio.h>

void search(int *a, int *b, int end) //if no. is not found it will show no result
{
    for(int i = 0; i < end; i++)
    {
        //printf("\n checking for %d", *(a+i));
        if(*(a+i) == *b)
        {
            printf("no. found at %d \n", i);
            break;
            
        }
        
        
    }
}

int main()
{
    int a[100], n, s;
    int *p1, *p2;
    p1 = &a[0], p2 = &n;

    printf("enter size of array \n");
    scanf("%d", &s);

    printf("enter the array \n");
    for(int i = 0; i < s; i++)
        scanf("%d", p1+i);
    
    printf("enter element to be searched \n");
    scanf("%d", p2);

    search(&a[0], p2, s);

}

