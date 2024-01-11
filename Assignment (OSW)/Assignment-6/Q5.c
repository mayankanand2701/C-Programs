#include <stdio.h>
int main(void)
{
   int *ptr;
   int a=12;
   int b=25;
   int c=18;
   printf("Value of a before increament = %d \n",a);
   ptr=&a;
   *ptr=(a+10);
   printf("Value of a after increament = %d \n",a);
   printf("Value of b before increament = %d \n",b);
   ptr=&b;
   *ptr=(b+10);
   printf("Value of b after increament = %d \n",b);
   printf("Value of c before increament = %d \n",c);
   ptr=&c;
   *ptr=(c+10);
   printf("Value of c after increament = %d \n",c);
}
