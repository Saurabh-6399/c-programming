#include<stdio.h>
int main()
{
  int x;
  x=3<0&&5>0;
  printf("value of x is %d",x);
  printf("\n");
  return 0; 
}
int p4()
{
  int x;
  x=!2>-2;
  printf("value of x is %d",x);
  printf("\n");
  return 0; 
}
int p3()
{
  int x;
  x=10>8>4;
  printf("value of x is %d",x);
  printf("\n");
  return 0;
}

int p2()
{
    int x;
    printf("enter a three digit number:");
    scanf("%d",&x);
    x=x%10*100+x/100*10+x/10%10;
    printf("rotate its digits by one position towards its right is %d",x);
    printf("\n");
    return 0;
}
int p1()
{
    float x;
    printf("enter a amount in INR:");
    scanf("%f",&x);
    x=x/84.23;
    printf(" USD amount is %f",x);
    printf("\n");
    return 0;
}