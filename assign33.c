#include<stdio.h>
void f2();

int main()
{
    f2();
    printf("\n");
    return 0;
}
void f2()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum;
    printf("enter a first matrix ");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d ",&a[i][j]);
    printf("enter a second matrix ");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d ",&b[i][j]);    
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
           for(k=0,sum=0;k<=2;k++)
               sum=sum+a[i][k]*b[k][j];
            c[i][j]=sum;
    printf("multiple of two matrix is:\n");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++) 
           printf("%d ",c[i][j]);
        printf("\n");             

    
}
void f1()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("enter a first matrix ");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    printf("enter a second matrix ");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d ",&b[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("sum of metrix is :\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
           printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}    