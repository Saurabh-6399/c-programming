#include<stdio.h>
int sumN(int n)
{
   if(n==1)
     return 1;
    return n+sumN(n-1);
   
}
int sumOddN(int n)
{
   if(n==1)
     return 1;
    return 2*n-1+sumOddN(n-1);
}    
int sumEvenN(int n)
{
   if(n==1)
     return 1;
    return 2*n+sumEvenN(n-1);
}    
int sumSquareN(int n)
{
   if(n==1)
     return 1;
    return n*n+sumSquareN(n-1);
}    
int sumdigit(int n)
{
   if(n==1)
     return 1;
    return n%10+sumdigit(n/10);
}    





