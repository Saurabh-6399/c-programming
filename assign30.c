#include<stdio.h>
void p5()
{
    int a[10],i,b[10];
    printf("enter 10 values: ");
    for(i=0;i<=9;i++)
      scanf("%d",&a[i]);
    for(i=1;i<=9;i++)
      b[i]=a[i];
    for(i=0;i<=9;i++)
       printf("another array is %d",b[i]);
    printf("\n");     

}
void p4()
{
    int a[10],i,t,r;
    printf("enter 10 values: ");
    for(i=0;i<=9;i++)
      scanf("%d",&a[i]);
    for(r=1;r<=9;r++)
    {
        for(i=0;i<=9-r;i++)
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        
    }
    printf("descendind order is %d",a[i]);
    printf("\n");

}
void p3()
{
    int a[10],i,t,r;
    printf("enter 10 values: ");
    for(i=0;i<=9;i++)
      scanf("%d",&a[i]);
    for(r=1;r<=2;r++)
    {
        for(i=0;i<=9-r;i++)
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        
    }
    printf("second smallest value of the arrays is %d",a[8]);
    printf("\n");
}
void p2()
{
    int a[10],i,t,r;
    printf("enter 10 values: ");
    for(i=0;i<=9;i++)
      scanf("%d",&a[i]);
    for(r=1;r<=9;r++)
    {
        for(i=0;i<=9-r;i++)
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        
    }
    printf("second largest value of the arrays is %d",a[8]);
    printf("\n");
}
void p1()
{
    int a[10],i,t,r;
    printf("enter 10 values: ");
    for(i=0;i<=9;i++)
      scanf("%d",&a[i]);
    for(r=1;r<=9;r++)
    {
        for(i=0;i<=9-r;i++)
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        
    }
    for(i=0;i<=9;i++)
      printf("% d",a[i]);
    printf("\n");   
}