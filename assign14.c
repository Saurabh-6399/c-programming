#include<stdio.h>
void p5()
{
    int i=0,r,n;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n)
    {
       r=n%10;
       n=n/10;
       i=i*10+r;
    }     
    printf("reverse number is %d",i);
    printf("\n");
}
void p4()
{
    int a,b,l;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    for(l=a>b?a:b;l<=a*b;l++)
    {
        if(l%a==0&&l%b==0)
        break;
    }
    printf("lcm is %d",l);
    printf("\n"); 
}
void main()
{
    int n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    for (i=2;i<=n;i++)
    {
        if(n%i==0)
        break;
    }
    if(i==n)
      printf("prime number");
    else
      printf("not prime");
    printf("\n");       

}
void p2()
{
    int n,count=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        count++;
    }
    printf("digit is %d",count);
    printf("\n");
} 
void p1()
{
    int i=1,sum=1,n;
    printf("enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum*i;
        i++;
    }
    printf("factorial is %d",sum);
    printf("\n");
}