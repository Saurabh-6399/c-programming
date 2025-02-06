#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a,band c ");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",a>b?a>c?a:c : b>c?b:c);
    printf("\n");
    return 0;
}
int p4()
{
   int x; 
   printf("enter a year number:");
   scanf("%d",&x);
   if(x%4==0)
     printf("leap year");
   else
     printf("not leap year");
   printf("\n");
   return 0;  
}
int p3()
{
    int a,b,c,d;
    printf("enter a,b and c; ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
      printf("roots are real and distinct");
    else if(d==0)
      printf("roots are equal");
    else if(d<0)
      printf("roots are imaginary ");
    printf("\n");
    return 0;  

}
int p2()
{
   int x,y; 
   printf("enter two number:");
   scanf("%d%d",&x,&y);
   if(x>y)
     printf("x is greater");
   else
     printf("y ia greater");
   printf("\n");
   return 0;    
}
int p1()
{
   int x; 
   printf("enter a number: ");
   scanf("%d",&x);
   if(x>99&&x<=999)
      printf("three digit number");
   else
       printf("not three digit number");
   printf("\n");
   return 0;
}


