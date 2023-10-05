// Program to calculate Simple Interest
#include <stdio.h>
int main(void)
{
  double p,r,t,si;
  printf("Enter the Principal = ");
  scanf("%lf",&p);
   printf("Enter the Rate = ");
  scanf("%lf",&r);
   printf("Enter the Time = ");
  scanf("%lf",&t);
  si=(p*r*t)/100;
  printf("The Simple Interest is = %lf",si);
 }
  
