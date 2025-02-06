#include<stdio.h>
int p5()
{
  int x;
  printf("enter a number: ");
  scanf("%d",&x);
  printf("a number without last digit %d is %d",x,x/10);
  printf("\n");
  return 0;
}
int p4()
{
  int x;
  printf("enter a number: ");
  scanf("%d",&x);
  printf("last digit a number %d is %d",x,x%10);
  printf("\n");
  return 0;
}

int P3()
{
   char x,y,z;
   printf("enter a  three ascii charcter: ");
   scanf("%c%c%c ",&x,&y,&z);
   printf("%c-%d\n",x,x);
   printf("%c-%d\n",y,y);
   printf("%c-%d\n",z,z);
   printf("\n");
   return 0;
}

int p2()
{
   int x;
   printf("enter a ascii code: ");
   scanf("%d",&x);
   printf("%d-%c",x,x);
   printf("\n");
   return 0;
}

int p1()
{
   char x;
   printf("enter a ascii cheracter: ");
   scanf("%c",&x);
   printf("%c-%d",x,x);
   printf("\n");
   return 0;
}
