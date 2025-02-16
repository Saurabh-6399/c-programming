#include<stdio.h>
int main()
{
  int var;
  printf("enter a number: ");
  scanf("%d",&var);
  switch(var)
  {
    case 1:
      printf("good");
      break;
    case 2:
      printf("better");
      break;
    case 3:
      printf("best");
      break;
    default:
       printf("invalid var");

  }printf("\n");
  return 0;
  

}
void p4()
{
    int a,b,c,choice=1;
    while(choice!=4)
    {
        printf("\n1.check isoscles triangle or not ");
        printf("\n2.check right angle triangle or not ");
        printf("\n3.check equalatral triangle or not");
        printf("\n4.end "); 
        printf("\n enter a choice");
        scanf("%d",&choice);
        switch (choice)
        {
           case 1:
                printf("enter three number: ");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c&&a+c>b&&b+c>a)
                {
                    if(a==b||a==c||b==c)
                     printf("isoscles triangle");
                    else
                      printf("not isoscles triangle");
                }
                else
                  printf("not a triangle"); 
                break;
           case 2:
                printf("enter three number: ");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c&&a+c>b&&b+c>a)
                {
                    if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
                     printf("right angle triangle");
                    else
                     printf("not right angle triangle"); 
                } 
                else
                  printf("not a triangle");
                break;
           case 3:
                printf("enter three number: ");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c&&a+c>b&&b+c>a)
                {
                    if(a==b==c)
                      printf("equaleteral triangle ");
                    else
                      printf("not equaletral triangle");  
                } 
                else
                  printf("not a triangle");
                break; 
           case 4: 
                break;
           default:
                printf("invalid choice ");
                           
        }           
    } printf("\n");                
}               



void p3()
{
    int day;
    printf("enter  day number: ");
    scanf("%d",&day);
    switch (day)
    {
        case 1:
          printf("monday motivation");
          break;
        case 2:
          printf("work hard on tuesday");
          break;
        case 3:
           printf("no rest on wednesday");
           break;
        case 4:
           printf("reading on thuesday");
           break;
        case 5:
           printf("good friday");
           break;
        case 6:
           printf("shopping satursday");
           break;
        case 7:
            printf("holiday on sunday");
        default:
           printf("invalid day number ");

    }printf("\n");
     
}    
void p2()
{
    int a,b,choice=1;
    while(choice!=5)
    {
        printf("\n1.addition ");
        printf("\n2.substraction ");
        printf("\n3.multiple ");
        printf("\n4.division ");
        printf("\n5.end ");
        printf("\nenter a choice");
        scanf("%d",&choice);
        switch (choice)
        {
    
            case 1:
                printf("enter two number: ");
                scanf("%d%d",&a,&b);
                printf("addition is %d",a+b);
                break;
            case 2:
                printf("enter two number: ");
                scanf("%d%d",&a,&b);
                printf(" subtraction is %d",a-b);
                break;
            case 3:
                printf("enter two number: ");
                scanf("%d%d",&a,&b);
                printf(" multification is %d",a*b);
                break; 
            case 4:
                printf("enter two number: ");
                scanf("%d%d",&a,&b);
                printf("quotient is %d",a/b);
                break; 
            case 5: 
                break;
            default:
                printf("invalid choice ");
        }    
        printf("\n");
       
    }
     
}
void p1()
{
   int month;
   printf("enter a month number: ");
   scanf("%d",&month);
   switch (month)
   {
     case 1: case 3: case 5: case 7:
     case 8: case 10: case 12:
       printf("31 days");
       break;
     case 4: case 6: case 9: case 11:
       printf("30 days");
       break;
     case 2:
       printf("28 or 29 days");
       break;
     default:
       printf("invalid month number");
       break;
   } printf("\n");
    
}