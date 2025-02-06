#include<stdio.h>
int main()
{
   int n,digit;
   printf("enter a number and digit;");
   scanf("%d%d",&n,&digit);
   n=n*10+digit;
   printf("resulting number is %d",n);
   printf("\n");
   return 0;

}
int p4()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    x=x/10*10;
    printf("%d",x);
    printf("\n");
    return 0;
}
int p3()
{
    int i;
    float f;
    double d;
    printf("size of int is %d\n",sizeof(i));
    printf("size of float is %d\n",sizeof(f));
    printf("size of char is %d\n",sizeof('m'));
    printf("size of double is %d",sizeof(d));
    printf("\n");
    return 0;
}   
   
int p2()
{
  printf("ascii code + is %d",'+');
  printf("\n");
  return 0;
}
int p1()
{
    int x;
    printf("enter three digit number: ");
    scanf("%d",&x);
    x=x%10+x/10%10+x/100;
    printf("sum of three digit number is %d",x);
    printf("\n");
    return 0;
}

