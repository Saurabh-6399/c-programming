#include<stdio.h>
#include<string.h>
int p1()
{
    char str[10]="saurabh";
    int l;
    for(l=0;str[l];l++);
    printf("length is string \"%s\" is %d",str,l);
    printf("\n");
}

void p2()
{
    int count=0;
    char str[50],ch;
    printf("enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    printf("enter a character:");
    fflush(stdin);
    scanf("%c",&ch);
    for(int i=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            count++;
        }

    }printf("result %d",count);
    printf("\n");
}
void p3()
{
    int count=0,i,j;
    char str[50],v[]="aeiouAEIOU";
    printf("enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(int i=0;str[i];i++)
    {
        for(j=0;v[j];j++)
        {
            if(str[i]==v[j])
            {
                count++;
                break;
            }
        }    
    }printf("result %d",count);
    printf("\n");
}
void p4()
{
    int count=0;
    char str[50];
    printf("enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(int i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
            count++;
        }

    }printf("result is=%d",count);
    printf("\n");
}
void main()
{
    int count=0;
    char str[50];
    printf("enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(int i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]-=32;
        }

    }printf("result %s",str);
    printf("\n");
}

