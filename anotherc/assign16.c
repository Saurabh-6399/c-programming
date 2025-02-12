#include<stdio.h>
int main()
{
    int i,y,digits,r,p,s;
    for(i=1;i<=1000;i++)
    {   
        digits=0;  
        y=i;
        while(y)
        {
            y/=10;
            digits++;
        }
        y=i;
        s=0;
        while(y)
        {
            r=y%10;
            y/=10;//calculate r power ditits
            for(i=1,p=1;i<=digits;i++)
            {
                p=p*r;
            }
            s=s+p;
        }
        if(s==i)
        printf("%d",i);
        printf("\n");
        return 0;
    }
    
    
}
int p4()
{
    int x,y,i,r,digits=0,s=0,p;
    printf("enter a number: ");;
    scanf("%d",&x);
    y=x;
    while(y)
    {
        y/=10;
        digits++;
    }
    y=x;
    while(y)
    {
      r=y%10;
      y/=10;//calculate r power ditits
      for(i=1,p=1;i<=digits;i++)
      {
        p=p*r;
      }
      s=s+p;
    }
    if(s==x)
      printf("number is armstrong");
    else
      printf("nummber is not armstrong");
    printf("\n");
    return 0;    
}

int p3()
{

    int a,b,c,n;
    printf("enter a number: ");
    scanf("%d",&n);
    while((a+b)<n)
    {
       c=a+b;
       a=b;
       b=c;
    }  
    if(a+b==n)
      printf("%d is the fibonacci series",n);
    else
      printf("not in fibonacci series ");
    printf("\n");
    return 0;     
}

int p2()
{
    int a=-1,b=1,c,n;
    printf("enter a nth number:");
    scanf("%d",&n);
    while(n)
    {
       c=a+b;
       printf("%d ",c);
       a=b;
       b=c;
       n--;
    }
    printf("\n");
    return 0; 
}
int p1()
{
    int a=-1,b=1,c,n;
    printf("enter a nth number:");
    scanf("%d",&n);
    while(n)
    {
       c=a+b;
       a=b;
       b=c;
       n--;
    }
    printf("%d",c);
    printf("\n");
    return 0;
}





