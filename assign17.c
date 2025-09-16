#include<stdio.h>
int p11()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {

            if(i==1||i==5||j==1||j==5)
                printf("*");
            else
               printf(" ");   
        }printf("\n");
    } 
}
void p10()
{
    int i,j,ch;
    for(i=1;i<=5;i++)
    {
        ch='A';
        for(j=1;j<=5;j++)
        {

            if(j>=i)
                printf("%c",ch);
            else
               printf(" ");
            ch++;   
        }printf("\n");
    }  
} 

void p9()
{
    int i,j,k=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=i)
                printf("%d",k++);
            else
               printf(" ");
        }printf("\n");
    }
     
}
void p8()
{
    int i,j,ch;
    for(i=1;i<=5;i++)
    {
        ch='A';
        for(j=1;j<=5;j++)
        {

            if(j>=i)
                printf("%c",ch++);
            else
               printf(" ");
        }printf("\n");
    }  
}

void p7()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=i;
        for(j=1;j<=4;j++)
        {
            if(j<=i)
                printf("%d",k--);
            else
               printf(" ");
        }printf("\n");
    }
}
void p6()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("%d",j);
            else
               printf(" ");
        }printf("\n");
    }
}
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("*");
            else
               printf(" ");
        }printf("\n");
    }  
}


void p4()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
                printf("*");
            else
               printf(" ");
        }printf("\n");
    }   
}



void p3()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
                printf("*");
            else
               printf(" ");
        }printf("\n");
    }     
}
void p2()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
                printf("*");
            else
               printf(" ");
        }printf("\n");
    }    
}
void p1()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("*");
            else
               printf(" ");
        }printf("\n");
    }
    
}