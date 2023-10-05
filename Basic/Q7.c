#include <stdio.h>
int main(void)
{
  int a,b,c;
  printf("Enter the value of a = ");
  scanf("%d",&a);
  printf("Enter the value of b = ");
  scanf("%d",&b);
  c=a; 
  a=b;
  b=c;
  printf("New value of a is = %d \n",a);
  printf("New value of b is = %d",b);
 }
  
