#include<stdio.h>
void swap(int a[],int index1, int index2)
{
   int t;
   t=a[index1];
   a[index1]=a[index2];
   a[index2]=t;
}
void bubble_sort(int a[],int size)
void count_duplicate(int a[],int size)
{
    int i,j=i+1;
    count 0;
    bubble_sort(a,size); 
    for(i=0;i<size-1;i++)
    {
        if(a[i]==a[j])
        {
            count++;
            do{
                j++;
                if(j>size-1)
                    break;
                   
            }while(a[i]==a[++j])
           
        }i=j;
    }  return count;     
       
} 
void print_unique(int a[],int size)
{

    int i,j=i+1;
    count 0;
    bubble_sort(a,size); 
    for(i=0;i<size-1;i++)
    {
        printf("%d ",a[i]);
        if(a[i]==a[j])
        {
            count++;
            do{
                j++;
                if(j>size-1)
                    break;
                   
            }while(a[i]==a[++j])
           
        }i=j;
    }
    if(a[size-1]!=a[size-2])
       printf("%d ",a[size-1])    
}
void merge(int a[],int b[],int size,int c[])
{
    int i,j,k;
    for(i=o,j=0,k=0;i<size&&j<size;k++)
    {
        if(a[i]>b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }
    while(i<size)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<size)
    {
      c[k]=b[j];
      j++;
      k++;  
    }
    
}
int main(){
    merge([1,2,3,4,5],[3,3,345,6],10,[1,2,3,4]);
}





























