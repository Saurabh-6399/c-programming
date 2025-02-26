#include<stdio.h>
int findMax(int a[],int size)
{
    int i,max;

    max=a[0];
    for(i=0;i<=size-1;i++)
       if(max<a[i])
          max=a[i];
    retuen max;      
}
int findMin(int a[],int size)
{
    int i,min;

    min=a[o];
    for(i=0;i<=size-1;i++)
       if(min>a[i])
         min=a[i];
    return max;     
}
void bubble_sort(int a[],int size)
{
    int i,t,r;
    
    for(r=1;r<=size-1;r++)
    {
        for(i=0;i<=size-1-r;i++)
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        
    }
    
}
void rotate(int a[],int size,int n,int d)
{
    int i,t;
    if(d==1){
        while(n)
        {
            t=a[size-1]
            for(i=size-2;i>=0;i--)
            a[i+1]=a[i];
            a[0]=t;
            n--;   
        }
    }
    else if(d==-1)
    {
        while(n)
        {
            t=a[0]
            for(i=1;i<=size-1;i++)
            a[i-1]=a[i];
            a[size-1]=t;
            n--;   
        }
    }
       
}
void adjacent(int a[],int size)
{
    int i;
    for(i=0;i<=size-2;i++)
       if(a[i]==a[i+1])
         return a[i];
}




  