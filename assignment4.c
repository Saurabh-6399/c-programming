#include<stdio.h>
int main()
{
    int x,y;
    printf("enter two value: ");
    scanf("%d%d",&x,&y);
    y=x+y-(x=y);
    printf("%d %d",x,y);
    printf("\n");
    return 0;
}
int p7()
{
         int x,y,z;
    printf("enter two value: ");
    scanf("%d%d",&x,&y);
    z=x+y;
    y=z-y;
    x=z-x;
    printf("%d %d",x,y);
    printf("\n");
    return 0;
}
int p6()
{
       int x,y;
    printf("enter two value: ");
    scanf("%d%d",&x,&y);
    x=x*y;
    y=x/y;
    x=x/y;
    printf("%d %d",x,y);
    printf("\n");
    return 0;
}
int p5()
{
     int x,y;
    printf("enter two value: ");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d %d",x,y);
    printf("\n");
    return 0;
}
int p4()
{
    int x,y,z;
    printf("enter two value: ");
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("%d %d",x,y);
    printf("\n");
    return 0;
}


int p3()
{
    char x='A';
    x++;
    printf("%c",x);
    printf("\n");
    return 0;
}

int p2()
{ 
  printf("size is %d",sizeof('4.5'));
  printf("\n");
  return 0; 
}


int p1()
{
  printf("size is %d",sizeof('A'));
  printf("\n");
  return 0;
}