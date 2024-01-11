#include <stdio.h>
int main(void)
{
   int a=5;
   int b=8;
   int c=0;
   printf("Before Swapping : \n");
   printf("Value of a is %d and address is %p \n",a,&a);
   printf("Value of b is %d and address is %p \n",b,&b);
   c=a;
   a=b;
   b=c;
   printf("After Swapping : \n");
   printf("Value of a is %d and address is %p \n",a,&a);
   printf("Value of b is %d and address is %p \n",b,&b);
 }
