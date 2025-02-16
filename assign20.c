#include<stdio.h>
void main()
{
    int choice=1,a,b,l,v;
    printf("\n1.lcm of two number ");
    printf("\n2.sum of digit of the number");
    printf("\n3.volume of cuboid  ");
    printf("\n4.check whether given prime or not ");
    printf("\n5.exit ");
    printf("\nenter a choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
          printf("enter two number");
          scanf("%d%d",&a,&b);
          for(l=a>b?a:b;l<=a*b;l++)
          {
            if(l%a==0&&l%b==0)
             break;
          } printf("lcm is %d",l);
          break;
        case 2:
          printf("enter a number ");
          scanf("%d",&a);
          l=0;
          while(a)
          {
            b=a%10;
            l=l+b;
            a=a/10;
          } printf("%d",l);
          break;
        case 3:
           printf("enter length breath and height:");
           scanf("%d%d%d",&a,&b,&l);
           v=a*b*l;
           printf("volume of cuboid is %d",v);
           break;
        case 4:
           printf("enter a number ");
           scanf("%d",&a);
           for(l=2;l<=a;l++)
           {
              if(a%l==0)
              break; 
           }if(a==l)
             printf("prime");

            else
             printf("not prime");                
            break;
        case 5:
           break;
        default:
          printf("invalid choice");          

        
    }printf("\n");

}    

void p4()
{
    char ch;
    printf("enter a character ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u': 
        case 'A': case 'E': case 'I': case 'O': case 'U':
           printf("vowel");
           break;
        case 'b' ... 'd': case 'f' ... 'h': case 'j' ... 'n':
        case 'p' ... 't': case 'v' ... 'z': 
        case 'B' ... 'D': case 'F' ... 'H': case 'J' ... 'N':
        case 'P' ... 'T': case 'V' ... 'Z':
           printf("consonent");
           break;
        default:
           printf("special character");          
    }printf("\n");
 
}
void p3()
{
    char ch;
    printf("enter a character ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a' ... 'z':
           printf("lowercase character");
           break;
        case 'A' ... 'Z':
           printf("upper character");
        default:
           printf("special character");          
    }printf("\n");

}
void p2()
{
   int choice,n,f,s,i;
   float a;
   printf("\n1.factorial number ");
   printf("\n2.check even or odd");
   printf("\n3.area of circle ");
   printf("\n4.sum of first n natural number ");
   printf("\n5.exit ");
   printf("enter a choice");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1:
            printf("enter a number ");
            scanf("%d",&n);
            f=1;
            while(n)
            {
                f=f*n;
                n--;
            }
            printf("factorial is %d",f);
            break;


       case 2:
           printf("enter a number ");
           scanf("%d",&n);
           if(n%2==0)
             printf("even");
           else 
              printf("odd");
           break;


       case 3:
           printf("enter a radius ");
           scanf("%d",&n);
           a=3.14*n*n;
           printf("%f",a);
           break;

       case 4:
          printf("enter a number ");
          scanf("%d",&n);
          for(i=1,s=0 ;i<=10;i++)  
          {
            s=s+i;
          }
          printf("sum is %d",s );
          break;
       case 5:
          break;
       default:
          printf("invalid choice");
   }printf("\n");

}
void p1()
{
   int marks;
   printf("enter marks") ;
   scanf("%d",&marks);
   switch(marks)
   {
        case 90 ... 100:
          printf("\ngrade: A");
          break;
       case 80 ... 89:
          printf("\ngrade: B");
          break;
       case 70 ... 79:
          printf("\ngrade: C");
          break;
       case 60 ... 69:
          printf("\ngrade: D");
          break;
       case 50 ... 59:
          printf("\ngrade: E");
          break;
       case 0 ... 49:
         printf("\ngrade: F");
         break;
        default:
           printf("invalid mark");           

   }printf("\n");
}
