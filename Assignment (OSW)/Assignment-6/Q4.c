#include <stdio.h>
int main(void)
{
   int *ptr1;
   int *ptr2;
   int *ptr3;
   int x=89;
   ptr1=&x;
   ptr2=&x;
   ptr3=&x;
   printf("Value of x using Pointer 1 = %d \n",*ptr1);
   *ptr3=100;
   printf("Value of x using Pointer 3 = %d \n",*ptr3);  
}
