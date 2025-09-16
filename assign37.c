#include<stdio.h>
int count_vowel(char s[])
{
    int i,count=0;
    char v[]="aeiouAEIOU";
    for(i=0;str[];i++)
    {
       for(j=0;j<=i;j++)
          if(str[i]=v[j])
          {
             count++;
             break;
          }
       
    }
    return count;

}
int indexof(char str[],char ch[])
{
   int i;
   for(i=0;str[i];i++)
   {
       if(str[i]==ch[])
       return i;
   }
   return -1;
}
int indexof(char str[],char ch[],int startindex,int endindex)
{
    int i;
    for(i=startindex;str[i]&&i<endindex;i++)
    {
        if(str[i]==ch)
         return i;
    }
    return -1;
}
char* swaper(char str[],int i,int j)
{
    char ch;
    if(i<strlen(str)&&j<strlen(str))
    {
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;
    }
    return str;
}
int isAlphaNumeric(char str[])
{
    int i,alpha=0,digit=0;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z')
          alpha 1;
        else if(str[i]>='A'&&str[i]<='Z')
           alpha 1;
        else if(str[i]>='1'&&str[i]<='9')
           digit 1;
        else  
             printf("string is not alphaNumeric");         
    }
    if(alpha&&digit)
        return 1;
    return 0;    
       
}




