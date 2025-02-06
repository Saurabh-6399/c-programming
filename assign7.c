#include<stdio.h>
int main()
{
   int s; 
   printf("enter a number: ");
   scanf("%d",&s);
   if((s&1)==1)
     printf("odd");
   else
     printf("even");
   printf("\n");     
   return 0; 
}
int p5()
{
   int s;
   printf("enter a number: ");
   scanf("%d",&s);
   if(s/2*2==s)
     printf("even");
   else
     printf("odd");
   printf("\n");     
   return 0; 
}
int p4()
{
   int s;
   printf("enter a number: ");
   scanf("%d",&s);
   if(s%2==0)
     printf("even");
   else
     printf("odd");
   printf("\n");     
   return 0;
}
int p3()
{
   int s;
   printf("enter a number: ");
   scanf("%d",&s);
   if(s%2==0)
     printf("even");
   else
     printf("odd");
   printf("\n");     
   return 0;
}

int p2()
{
   int s;
   printf("enter a number: ");
   scanf("%d",&s);
   if(s%5==0)
     printf("divisible by 5");
   else
     printf("not divisible by 5");
   printf("\n");     
   return 0;
}
int p1()
{
   int s; 
   printf("enter a number: ");
   scanf("%d",&s);
   if(s>0)
   {
    printf("positive");
   }
   if(s<=0)
   {
    printf("non positive");
   } 
   printf("\n");
   return 0; 

}