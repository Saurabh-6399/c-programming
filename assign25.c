#include<stdio.h>
void printN(int n)
{
  if(n>0)
  {
      printN(n-1);
      printf(" %d",n);
  }       
}
void printReverseN(int n)
{

   if(n>0)
   {

     printf("%d",n);
     printReverseN(n-1);

   }

}
void printOddN(int n)
{

    if(n>0)
    {

        printOddN(n-1);
        printf(" %d",2*n-1);

    }
}
void printReverseOddN(int n)
{
    if(n>0)
    {

       printf(" %d",2*n-1);
       printReverseOddN(n-1);
      
    }
}
void printEvenN(int n)
{
   if(n>0)
   {
      printEvenN(n-1);
      printf(" %d",2*n);

   } 
}



