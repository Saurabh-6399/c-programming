#include<stdio.h>
int main()
{
    int month;
    printf("enter a month");
    scanf("%d",&month);
    if(month==2)
      printf("28 or 29 days");
    else if(month==4||month==6||month==9||month==11)
      printf("30 day");
    else if(month<1||month>12)
      printf("invalid month number");
    else 
      printf("31 days"); 
    printf("\n");
    return 0;
}
int p3()
{
    int a,b,c;
    printf("enter a side of length:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>0&&b>0&&c>0 && a+b>c&&b+c>a&&a+c>b)
      printf("triangle valid");
    else
      printf("triangle invalid");
    printf("\n");
    return 0;   
}
int p2()
{
    int a;
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
      printf("uppercase");
    else if(ch>='a'&&ch<='z')
      printf("lowercase");
    else if(ch>='0'&&ch<='9')
      printf("digit"); 
    else
      printf("special character");  
    printf("\n");
    return 0;
}
int p1()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a>0)
      printf("positive");
    else if(a<0)
      printf("negative");
    else
      printf("zero");
    printf("\n");
    return 0;      
}