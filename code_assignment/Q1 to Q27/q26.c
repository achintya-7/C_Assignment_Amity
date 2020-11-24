#include<stdio.h>
#include<string.h>

int main()
{
    char in[100], o[100], d;

    printf("enter binary number \n");
    scanf("%s", &in);
    d = strlen(in);

    for(int i = 0; i < d; i++)
    {
        if (in[i] == '0')
            o[i] = '1';
        else if (in[i] == '1')
            o[i] = '0';
        else
        {
            printf("invalid input \n");
            break;
            
        }           
    }
    o[strlen(in)] = '\0';
    printf("1's complement is : %s", o);
    
}