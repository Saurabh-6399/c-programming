#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};
struct Employee inputEmployeedata()
{
    struct employee e;
    printf("enter a id,name and salary of the employee");
    scanf("%d",&e.id)
    fflush(stdlin);
    fgets(e.name,20,stdlin);
    e.name[strlen(e.name)-1]='\0';
    scanf("%f",&e.salary);
    return e;
}
void  displayemployeedata(struct employee e)
{
    printf("\n%d %s %f",e.id,e.name,e.salary);
}
struct employee highestemployeesalary(struct employee e[],int n)
{
    struct employee maxsalaryemployee;
    int i;
    maxsalaryemployee=e[0];
    for(i=0;i<n;i++)
    {
        if(maxsalaryemployee.salary<e[i].salary)
           maxsalaryemployee=e[i];

    }
    return maxsalaryemployee;
    
}
void Sortbysalary(struct employee e[],int n)
{
    int r,i;
    struct employee temp;
    for(r=1;r<n;r++)
    {
        for(i=0;i<n-1-r;i++)
        {
            if(e[i].salary>e[i+1].salary)
            {
                temp=e[i];
                e[i]=e[i+1];
                e[i+1]=temp;
            }    
        }
    }
}
void sortbyname(struct employee e[],int n)
{
    int r,i;
    struct employee temp;
    for(r=1;r<n;r++)
    {
        for(i=0;i<n-1-r;i++)
        {
            if(strcmp(e[i].name,e[i+1].name)>0)
            {
                temp=e[i];
                e[i]=e[i+1];
                e[i+1]=temp;
            }    
        }
    }
}
