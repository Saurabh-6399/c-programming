#include<stdio.h>
#include<string.h>
void swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
void search_all_occurrences(char *str,char ch,int *arr)
{
    int i,j;
    for(i=0,j=0,str[i];i++)
    {
        if(str[i]==ch)
        {
            arr[j]=i;
            j++;
        }
    }
}
char* upper_case(char *str)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]-=32;
        }
             
    }
    return str;
}
char* lower_case(char *str)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]+=32;
        }       
    }
    return str;
}
void extract_string(char *str,int start_index,int end_index,char *result)
{
    int i,j;
    int l;
    l=strlen(str);
    if(start_index>=0 && start_index<end_index &&start_index<l)
    {
        if(end_index>l)
            end_index=l;
        for(j=0;i=start_index;i<end_index;j++,i++)
        {
            result[j]=str[i];
        } 
        result[j]='\0';     
    }
    else
       result[0]='\0';

}
