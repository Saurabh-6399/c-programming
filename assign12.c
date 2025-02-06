#include<stdio.h>
void main()
{
    int i=1,n;
    printf("enter a number");
    scanf("%d ",&n);
    while (i<=n)
    {
       printf("%d \n",i*i*i);
       i++;  
    }
}   
void p8()
{
    int i=1,n;
    printf("enter a number");
    scanf("%d",&n);
    while (i<=n)
    {
       printf("%d ",i*i);
       i++; 
    }  
}
void p7()
{
    int i=0,n;
    printf("enter a number");
    scanf("%d",&n);
    while (i<n)
    {
       printf("%d ",2*n-(2*i));
       i++; 
    }  
}
void p6()
{
    int i=0,n;
    printf("enter a number");
    scanf("%d",&n);
    while (i<=n)
    {
       printf("%d ",2*i);
       i++; 
    }  
}
void p5()
{
    int i=1,n;
    printf("enter a number");
    scanf("%d",&n);
    while (i<=n)
    {
       printf("%d ",2*n-(2*i-1));
       i++; 
    }    
}
void p4()
{
    int i=1,n;
    printf("enter a number");
    scanf("%d",&n);
    while (i<=n)
    {
       printf("%d ",2*i-1);
       i++; 
    }   
}
void p3()
{
   int i=1,n;
    printf("enter a number");
    scanf("%d",&n);
    while (i<=n)
    {
       printf("%d ",n+1-i);
       i++; 
    }  
}
void p2()
{
    int i=1,n;
    printf("enter a number");
    scanf("%d",&n);
    while (i<=n)
    {
       printf("%d\n",i);
       i++; 
    } 
}
void p1()
{
    int i=1,n;
    printf("enter a number");
    scanf("%d",&n);
    while (i++<=n)
    {
       printf("mysirg\n");
       
    }

}