#include<stdio.h>
float area(int r)
{
    return 3.14*r*r; 
}
float simple interest(int p,float r,int t);
{
    return p*r*t/100;
}
int is_even(int n)
{
    return n%2==0;
}
int printN(int n)
{
    int i;
    for(i=1;i<=n;i++)
       printf("%d",i);
}
int printNodd(int n);
{
    int i;
    for(i=1;i<=n;i++)
      printf("%d",2*i-1);
    
}



