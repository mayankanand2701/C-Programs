#include <stdio.h>
int main(void)
{
   int arr1[]={120,502,118,188,106,447};
   int *ptr1=arr1;
   int *ptr2=arr1+1;
   int *ptr3=arr1+2;
   int *ptr4=arr1+3;
   int *ptr5=arr1+4;
   int *ptr6=arr1+5;
   printf("The value of arrays are = \n");
   printf("%d \n",*ptr1);
   printf("%d \n",*ptr2);
   printf("%d \n",*ptr3);
   printf("%d \n",*ptr4);
   printf("%d \n",*ptr5);
   printf("%d \n",*ptr6);
   
 }
