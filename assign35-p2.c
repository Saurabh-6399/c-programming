#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char str[50];
    printf("enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(int i=0;str[i];i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]+=32;
        }

    }printf("result is= %s",str);
    printf("\n");
}
void p2()
{
    int l,i;
    char ch;
    char str[50];
    printf("enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    l=strlen(str);
    for(i=0;i<=l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    printf("length is =%s",str);
    printf("\n");
   
}  
void p3()
{
   int s=0,i,sc=0;
   int ch=0;
   char str[50];
   printf("enter a string:");
   fgets(str,50,stdin);
   str[strlen(str)-1]='\0';
   for(i=0;str[i];i++)
   {
      if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))
         ch++;
      else if(str[i]>='0' && str[i]<='9')
         s++;
      else
          sc++;
      
    }
    printf("number of alphabets=%d\n",ch);
    printf("number of digits=%d\n",s);
    printf("number of special character=%d",sc);
    printf("\n");    
}
void p4()
{
    
    char str1[50]="hello";
    char str2[50]="students";
    strcat(str1,str2);

    printf("copy is =%s",str1);
    printf("\n");
}
void p5()
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
            printf("position of this character =%d",i);
            break;
        }

    }
    if(str[i]=='\0');
       printf("character not found");
    printf("\n");
}








