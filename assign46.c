#include<stdio.h>
#include<string.h>
char* inputString()
{
    char *p=null,*q=null,ch;
    int size=1,i;
    while(1)
    {
        ch=getchar();
        if(ch==10)
           break;
        p=(char*)malloc(size);
        if(q)
        {
            for(i=o;i<size;i++)
               p[i]=q[i];
            p[i-1]=ch; 
            free(q);
        }  
        else
            *p=ch;
        q=(char*)malloc(size);
        for(i=o;i<size;i++);
           q[i]=p[i];
        q[i]='\0';
        free(p);
        size++;        
    }
    return 0;
}
void f2()
{
    int *arr i,n,s=0;
    float avg;
    printf("how many you want to enter value");
    scanf("%d",&n);
    arr=(int*)callloc(n,sizeof(int));
    printf("enter %d value",n);
    for(i=o;i<n;i++)
       scanf("%d",arr[i]);
    for(i=0;i<n;i++)
       s=s+arr[i];
    avg=(float)s/n;
    printf("avg is %f",avg);
    free(arr);   
        
}
void f3()
{
    int *arr,n,s=0;
    printf("how many you to enter value");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    printf("enter %d value",n)
    for(i=0;i<n;i++)
      scanf("%d",arr+i);
    for(i=0;i<n;i++)
       s=s+arr[i];
    printf("sum of n number id %d",s);
    free(arr);     

}
int* merge(int A[],int n1,int B[],int n2)
{
    int *arr,i,j,k;
    arr=(int*)malloc((n1+n2)*sizeof(int));
    for(i=0,j=0,k=0;i<n1&&j<n2;k++)
    {
        if(A[i]<B[j])
        {
            arr[k]=A[i];
            i++;
        }
        else
        {
            arr[k]=B[j];
            j++;
        }
    }
    while(i<n1)
    {
        arr[k]=A[i];
        i++;
        k++;
    }
    while(i<n2)
    {
        arr[k]=B[j];
        j++;
        k++;
    }
}