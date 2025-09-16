#include<stdio.h>
void print_frequency(char str[])
{
    int f[128]={0},i;
    for(i=0;str[i];i++)
       f[str[i]]++;
    for(i=0;i<=127;i++)
      if(f[i]!=0)
         printf("%c-%d",i,f[i]);

}
int find_word(char str[],char word[])
{
    int i,j,l;
    l=strlen[word];
    for(i=0,str[i+l-1],i++)
    {
        for(j=0;word[j];j++)
        {
            if(str[i+j]!=word[j])
              break;
        }
        if(!word[j])
           if(i==0&&(str[i+l]==' '||str[i+l]=='\0')||str[i-1]==' '&&(str[i+l]==' '||str[i+j]=='\0'))
             return i;
    }
    return -1;

}
char* charactlize(char str[])
{
    int i=0;
    if(str[i]>='a'&&str[i]<='z')
       str[i]-=32;
    for(i=0;str[i];i++)
    {
       if(str[i]==' ')
           if(str[i+1]!=0&&str[i+1]!=' ')
               if(str[i+1]>='a'&&str[i+1]<='z')
                  str[i+1]=-32;
    }  
    return str;             
}
char* concatenate(char s1[],char s2[])
{
   int i,j;
   i=strlen[s1];
   for(j=0;s2[j];j++)
      s1[i+j]=s2[j];
    s1[i+j]=='\0';
    return s1;  
}
char* acronym(char str[])
{
    
}








