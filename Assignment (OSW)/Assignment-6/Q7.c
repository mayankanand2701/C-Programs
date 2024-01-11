#include <stdio.h>
int main(void)
{
   int a=52;
   int b=18;
   int *ptr1=&a;
   int *ptr2=&b;
   if(*ptr1>*ptr2) printf("A is Greater \n");
   else printf("B is Greater \n");
}
