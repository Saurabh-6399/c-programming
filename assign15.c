#include<stdio.h>
int main()
{
   int a,b,h;
   printf("enter two number: ");
   scanf("%d%d",&a,&b);
   for(h=a<b?a:b;h<=a*b;h--)
   {
      if(a%h==0&&b%h==0)
        break;
   }
   if(h==1)
     printf("numbers are co prime");
   else
     printf("numbers are not co prime");

   printf("\n");
}
int p4()
{
   int a,b,h;
   printf("enter two number: ");
   scanf("%d%d",&a,&b);
   for(h=a<b?a:b;h<=a*b;h--)
   {
      if(a%h==0&&b%h==0)
        break;
   }
   printf("hcf is %d",h);
   printf("\n"); 

}
void p3()
{
    int n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    n++;
    while(1)
    {
        for(i=2;i<=n;i++)
        {
           if(n%i==0)
              break;
        if(n==i)
           break;
        n++;              
        }

    }
    printf("%d",n);
}    
void p2()
{
    int i,n,a,b;
    printf("enter a lower and upper number:");
    scanf("%d%d",&a,&b);
    for(n=a+1;n<b;n++)
    {
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            break;
        }
        if(i==n)
         printf("%d ",n);
       
    }printf("\n");
}
void p1()
{
    int i,n;
    for(n=2;n<100;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            break;
        }
        if(i==n)
         printf("%d ",n);
       
    }printf("\n"); 
}     

    
  

