#include<stdio.h>
int main()
{
  float sp,cp,profit;
  printf("enter cp and sp of 12 bananas:");
  scanf("%f%f",&cp,&sp); 
  profit=(sp-cp)/12*25;
  printf("profit(+ve)/loss(-ve)=%f",profit);
  printf("\n");
  return 0;
  
}






int p4()
{
  int l,b,h,vol;
  printf("enter three value: ");
  scanf("%d%d%d",&l,&b,&h);
  vol=l*b*h;
  printf("volume of cuboid is %d",vol);
  printf("\n");
  return 0;

}

int p3()
{
  int p;
  float r,t,x;
  printf("enter three value: ");
  scanf("%d%f%f",&p,&r,&t);
  x=(p*r*t)/100;
  printf("simple intersect is %f",x);
  printf("\n");
  return 0;
}



int p2()
{
  int r;
  float circum;
  printf("enter a radius:");
  scanf("%d",&r);
  circum=2*3.14*r;
  printf("circumference is %f",circum);
  printf("\n");
  return 0;

}
int p1()
{
  int a,b,c;
  float avg;
  printf("enter three values:");
  scanf("%d%d%d",&a,&b,&c);
  avg=(a+b+c)/3;
  printf("avg of three number is %f",avg);
  printf("\n");
  return 0; 
}