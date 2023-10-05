// Program to calculate Volume of Sphere
#include <stdio.h>
#define pi 3.14159265359
int main(void)
{
  double v,r;
  printf("Enter the radius = ");
  scanf("%lf",&r);
  v=(4/3)*pi*(r*r*r);
  printf("The volume of sphere =%lf",v);
 }
