#include<stdio.h>
void printReverseEvenN(int n)
{
    if(n>0)
    {
        printf(" %d",n);
        printReverseEvenN(n-1);
    }
}
void printSquareN(int n)
{
    if(n>0)
    {
        printSquareN(n-1);
        printf(" %d",n*n);
    }
}
void dtob(int num)
{
    if(num>0)
    {
        dtob(num/2);
        printf("%d",num%2);
    }
}
void dtoo(int num)
{
    if(num>0)
    {
        dtoo(num/8);
        printf("%d",num%8);
    }
}
void reverse(int num)
{
    if(num>0)
    {
        printf("%d"num%10);
        reverse(num/10);
    }
}


