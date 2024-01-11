#include <stdio.h>
int main(void)
{
   double *ptr;
   double x=6.7;
   double y=1.2;
   double z=2.3;
   ptr=&x;
   printf("Value of x using Pointer = %lf \n",*ptr);
   ptr=&y;
   printf("Value of y using Pointer = %lf \n",*ptr);
   ptr=&z;
   printf("Value of z using Pointer = %lf \n",*ptr);
}
