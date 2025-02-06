#include<stdio.h>
int main()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    if(x%7==0||x%3==0)
      printf("divisible by 7 or 3");
    else
      printf("not divisible by 7 or 3");
    printf("\n");
    return 0; 
}
int p4()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    if(x%7==0&&x%3==0)
      printf("divisible by 7 and 3");
    else
      printf("not divisible by 7and 3");
    printf("\n");
    return 0;    
}
int p3()
{
    char ch;
    printf("enter a alphabet:");
    scanf("%c",&ch);
    if(ch>='A'&&ch<'Z')
       printf("upppercase");
    else if(ch>='a'&&ch<'z')
       printf("lowercase");
    printf("\n");
    return 0;
}
int p2()
{
    int m1,m2,m3,m4,m5;
    printf("enter marks of 5 subjects;");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    if(m1>33&&m2>33&&m3>33&&m4>33&&m5>33)
      printf("condidates passed the examination");
    else
      printf("candidates fails");
    printf("\n");
    return 0;  
}
int p1()
{
    float cp,sp,p;
    printf("enter cp and sp");
    scanf("%f%f",&cp,&sp);
    if(cp<=sp)
    {
      p=(sp-cp)/cp*100;
      printf("profit is %0.2f%%",p);
    }
    else
    {
      p=(cp-sp)/cp*100;
      printf("loss percentage is %0.2f%%",p);
    }
    printf("\n");
    return 0;
}       