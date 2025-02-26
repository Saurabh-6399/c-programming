#include<stdio.h>
void p5()
{
    int a[10],i,min;
    printf("enter 10 values: ");
    for(i=0;i<=9;i++)
      scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<=9;i++)
      if(min<a[i])
         min=a[i];
    printf("manimum number is %d",min);
    printf("\n"); 
}
void p4()
{
    int a[10],i,max;
    printf("enter 10 values: ");
    for(i=0;i<=9;i++)
      scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<=9;i++)
      if(max>a[i])
         max=a[i];
    printf("maximum number is %d",max);
    printf("\n");     

}
void p3()
{
    int a[10],i,se,so;
    printf("enter 10 values: ");
    for(i=0;i<=9;i++)
      scanf("%d",&a[i]);
    for(i=0,se=0,so=0,i<=9,i++) 
        if(a[i]%2==0)
          se=se+a[i];
        else
          so=s0+a[i];
    printf("sum of even number is %d",se);
    printf("sum of odd number is %d",so);
    printf("\n");        
}
void p2()
{
    int a[10],i,s;
    float avg;
    printf("enter 10 values: ");
    for(i=0;i<=9;i++)
      scanf("%d",a[i]);
    for(i=0,s=0,i<=9,i++)
      s=s+a[i];
    avg=s/10.0;
    printf("average of %f",avg);
    printf("\n");
     
}

void p1()
{
    int a[10],i,s;
    printf("enter 10 values: ");
    for(i=0;i<=9;i++)
      scanf("%d",a[i]);
    for(i=0,s=0,i<=9,i++)
      s=s+a[i];
    printf("sum is %d",s);
    printf("\n");
    

}








