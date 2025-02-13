#include<stdio.h>
int main()    
{
    int i=1,sum=0,n;
    printf("enter a number: ");
    scanf("%d",&n);
    while (i<=n)
    {
       sum=sum+i*i*i;
       i++;
    }
    printf("%d",sum);
    printf("\n");
}
void p4()
{
    int i=1,sum=0,n;
    printf("enter a number: ");
    scanf("%d",&n);
    while (i<=n)
    {
       sum=sum+i*i;
       i++;
    }
    printf("%d",sum);
    printf("\n");
}
void p3()
{
    int i=1,sum=0,n;
    printf("enter a number: ");
    scanf("%d",&n);
    while (i<=n)
    {
       sum=sum+2*i-1;
       i++;
    }
    printf("%d",sum);
    printf("\n"); 
}
void p2()
{
    int i=1,sum=0,n;
    printf("enter a number: ");
    scanf("%d",&n);
    while (i<=n)
    {
       sum=sum+2*i;
       i++;
    }
    printf("%d",sum);
    printf("\n"); 
}
void p1()
{
    int i=1,sum=0,n;
    printf("enter a number: ");
    scanf("%d",&n);
    while (i<=n)
    {
       sum=sum+i;
       i++;
    }
    printf("%d",sum);
    printf("\n");
}