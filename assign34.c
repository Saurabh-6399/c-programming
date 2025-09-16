#include<stdio.h>
#include<string.h>
void f2
{
    char str[50];
    int i;
    printf("enter a string :");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    

    for(i=0;str[i];i++);
    printf("lenth is %d",i);
    printf("\n");

}
void f1()
{
    char str[50];
    int i;
    printf("enter a string :");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++);
    printf("lenth is %d",i);
    printf("\n");


}