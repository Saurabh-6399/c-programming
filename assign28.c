#include<stdio.h>
int FactN(int n)
{
    if(n==0)
      return 1;
    return n*FactN(n-1);
}
int hcf(int a,int b)
{
   if(a>b)
   {
      if(a%b==0)
         return b;
      else
         return hcf(a%b,b);     
   }
   else
    { 
      if(b%a==0)
         return a;
       else
          return hcf(a b%a);  
    }
}
void printFiboN(int n,int a,int b)
{
  if(n>=0)
  {
    
     printf(" %d",a+b);
     printFiboN(n-1,b,a+b);

  }

}
int countDigits(int num)
{
   if(num==0)
     return 0;
   return 1+countDigits(num/10);  
}
double poower(double x,double y);
{
   if(y==0)
     return 1;
   if(y>0)
     return x*power(x,y-1);
   else
     return 1/x*power(x,y+1);    
}






    