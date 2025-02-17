#include<stdio.h>
int fact(int n)
{
    int f=1;
    while(n)
    {
        f=f*n;
        n--;
    }
    return f;
}
int combi(int n,int r)
{
    return fact(n)/fact(n-r)/fact(r);
}
int arrange(int n,int r)
{
    return fact(n)/fact(n-r);
}
int containdigit(int n,int digit)
{
    while(n)
    {
        if(n%10==digit)
          return 1;
        n=n/10;  
    }
    return 0;
}
void print_prime_factor(int n)
{
    i=2;
    while(n>1)
    {    
        while(n%i==0)
        {
            printf("%d",i);
            n/=i;
        }
        i=nextprime(i);
    }    
}




