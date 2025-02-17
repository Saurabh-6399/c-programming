#include<stdio.h>
void printprimenumber  (int a,int b)
{
   int i;
   for(i=a;i<=b;i++)
     if(is_prime(i))
        printf("%d ",i);
}
void printfibo_series(int n)
{
    int a=-1,b=1,c;
    while(n)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
    }
}
int combi(int n,int r)
{
    return fact(n)/fact(n-r)/fact(r);
}
void print_pascelTriangle(int rows)
{
    int i,j;
    for(i=1;i<=rows;i++)
    {
        n=i-1;
        r=0;
        x=1;
        for(j=1;j<=2*rows-1;j++)
        {

            if(j>=rows+1-i&&j<=rows-1+i)
            {
                if(x)
                {
                 printf("%d",combi(n,r++));
                } 
                else
                  printf(" ");
                x=1-x;
            } 
            else
              printf(" ");
        }  
    } 
}
void printArmstrong_number(int a,int b)
{
    int x;
    for(x=a;x<=b;x++)
    {
        digits=0;
        x=i;
        while(i)
          i/=10;
          digits++;
          
    }
}















