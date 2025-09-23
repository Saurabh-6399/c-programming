#include<stdio.h>
#include<stdio.h>
struct time 
{
    int hr,min,sec;
};
int isGreater(struct time  t1,struct time t2)
{
    if(t1.hr>t2.hr)
       return 1;
    if(t1.hr<t2.hr)
       return 0;
    if(t1.min>t2.min)
        return 1;
    if (t1.min<t2.min)
        return 0;
    if(t1.sec>t2.sec)
        return 1;
    return 0;   
              
}
struct time difference(struct time t1,struct time t2)
{
    struct time t3;
    if(isGreater(t1,t2))
    {
        if(t1.sec<t2.sec){
          t1.sec+=60;
          if(t1.min>0)
             t1.min-=1;
           else{
              t1.min+=60;
              t1.hr-=1;
           }  
        }
        t3.sec=t1.sec-t2.sec;
        if(t1.min<t2.min)
        {
            t1.min+=60;
            t1.hr-=1;
        }  
        t3.min=t1.min-t2.min;
        t3.hr=t1.hr-t2.hr; 
    }
    else
    {
        if(t2.sec<t1.sec){
          t2.sec+=60;
          if(t2.min>0)
             t2.min-=1;
          else
           {
              t2.min+=60;
              t2.hr-=1;
            } 
        } 
        t3.sec=t2.sec-t1.sec;
        if(t2.min<t1.min)
        {
            t2.min+=60;
            t2.hr-=1;
        }  
        t3.min=t2.min-t1.min;
        t3.hr=t2.hr-t1.hr; 
    }
    return t3;
             
}
void f1()
{
    struct time t1={2,32,59},t2={3,40,58};
    struct time t3;
    t3=difference(t1,t2);
    printf("\n%d%d%d",t3.hr,t3.min,t3.sec);

}
struct student 
{
    int rollNo.;
    char name[20];
};
struct student inputstudent()
{
    struct student s;
    printf("enter a rollNo and name of student: ");
    scanf("%d",&s.rollNo);
    fflush(stdlin);
    fgets(s.name,20,stdlin);
    s.name[strlen(s.name)-1]='\0';
    return s;
}
void displaystudentdata(struct student s)
{
    printf("\n%d %s",s.rollNo,s.name);

}
void inputNstudents(struct student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
       s[i]=inputstudent();
}
void displayNstudents(struct student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
      displaystudentdata(s[i]);
}
void f2()
{
   struct student s[10];
   inputNstudents(s,10);
   displayNstudents(s,10);
}
void f3()
{
    int n;
    struct student *ptr;
    printf("how many student record you want to store")
    scanf("%d",&n);
    ptr=(struct student*)calloc(n,sizeof(struct student));
    inputNstudents(ptr,n);
    displayNstudents(ptr,n);

}
struct Marks
{
    int rollno;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};
struct Marks inputMarks()
{
    struct Marks marks;
    printf("enter mark data:");
    scanf("%d",&marks.rollno);
    fflush(stdlin);
    fgets(marks.name,20,stdlin);
    marks.name[strlen(marks.name)-1]='\0';
    scanf("%d",&marks.chem_marks);
    scanf("%d",&marks.maths_marks);
    scanf("%d",&marks.phy_marks);
    return marks;

}
float percentage(struct Marks m)
{
    return ( m.chem_marks+m.phy.marks+m.maths_marks)/3.0;
}
void f4()
{
    struct Marks m[5];
    int i;
    for(i=0;i<4;i++)
    {
        m[i]=inputMarks();
    }
    for(i=0;i<4;i++)
        printf("%d %s %f",m[i].rollno,m[i].name,percentage(m[i]);)  
      
}


