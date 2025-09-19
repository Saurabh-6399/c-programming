#include<stdio.h>
#include<string.h>
void swap_string(char *p,char *q)
{
    char temp[100];
    strcpy(temp,p);
    strcpy(p,q);
    strcpy(q,temp);
}
void sort(int *ptr,int size);
{
    int r,i,t;
    for(r=1;r<size;r++)
    {
        for(i=0;i<size-1-r;i++)
        {
            if(ptr[i]>ptr[i+1])
            {
                t=ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=t;
            }
        }
    }
    
}
void merge(int *arr1,int size1,int *arr2,int size2,int *arr3)
{
    int i,j,k;
    for(i=0,j=0,k=0;i<size1 &&j<size2;k++)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
        }
    }
    while(i<size1)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<size2)
    {
        arr3[k]=arr1[j];
        j++;
        k++;
    }
}
int f4(int A[],int size)
{
    int left,right,loc,temp;
    left=0;
    right=size-1;
    loc=0
    while(left<right)
    {
        while(left<right && A[left]<A[right])
            right--;
        if(left==right)
           break;
        temp=A[left];
        A[left]=A[right];
        A[right]=temp;
        loc=right;
        while(left<right && A[left]<A[loc])
            left++;
        if(left==right)
            break;
        temp=A[left];
        A[left]=A[loc]
        A[loc]=temp;
        loc=left;                   
    }
    return loc;
}
int highestMark(int **p,int no.of_class,int no.of_student[])
{
    int max,i,j;
    max=p[0][0];
    for(i=0;i<no.of_class;i++)
    {
        for(j=0;j<no.of_student[i];j++)
        {
            if(max<p[i][j])
                max=p[i][j];

        }
    }
    return max;
}

