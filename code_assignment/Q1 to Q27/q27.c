#include<stdio.h>
#include<string.h>

int main()
{
    char in[100], o[100], t[100], d, carry = 1;

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

    o[d] = '\0'; 
    printf("1's complement is : %s \n", o);

    for (int i = d-1; i >= 0; i--)
      {  
        if(o[i] == '1' && carry == 1)  
        {  
            t[i] = '0';  
        }  
        else if(o[i] == '0' && carry == 1)  
        {  
            t[i] = '1';  
            carry = 0;  
        }  
        else  
        {  
            t[i] = o[i];  
        }  
    }
    t[d] = '\0'; 

    printf("2's complement is : %s \n", t);
    return 0;
}