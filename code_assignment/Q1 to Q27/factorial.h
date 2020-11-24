void fact(int a)
{
    long int k = 1;
     for(int i = 1; i <= a; i++)
    {
        k = k * i;
               
    }
    printf("the factorial is %ld", k);
}
