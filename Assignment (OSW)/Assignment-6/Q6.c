#include <stdio.h>
int main(void)
{
   int a=12;
   int b=52;
   int c=8;
   int *ptr1=&a;
   int *ptr2=&b;
   int *ptr3=&c;
   *ptr1=(a+10);
   *ptr2=(b+10);
   *ptr3=(c+10);
   printf("Value of a after increament = %d \n",a);
   printf("Value of b after increament = %d \n",b);
   printf("Value of c after increament = %d \n",c);
}
