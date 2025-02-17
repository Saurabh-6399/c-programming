#include<stdio.h>
int lcm(int a,int b)
{
    int l;
    for(l=a>b?a:b;l<=a*b;l++)
    {
        if(l%a==0&&l%b==0)
          return l;
    }
    
}
int hcf(int a,int b)
{
    int h;
    for(h=a<b?a:b;h<=a;h--)
    {
        if(a%h==0&&b%h==0)
          return h;
    }
    
}
int is_prime(int n)
{
   i=2;
   for(i=2;i<n;i++)
   
      if(n%i==0)
         return 0;
    return 1;
}
int nextpreime(int num)
{
    while(!is_prime(++num));
    return num;
}
void printN_prime(int n)
{
    int i=2;
    while(n)
    {
        printf("%d ",i);
        i=nextprime(i);
        n--;
    }
}

