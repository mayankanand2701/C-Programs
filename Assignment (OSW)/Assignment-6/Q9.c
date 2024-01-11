#include <stdio.h>
int main(void)
{
   int arr1[]={10,13,20,33,44};
   double arr2[]={10.2,13.3,20.0,33.3,45.3,89.9};
   int *ptr1=arr1;
   for(int i=0;i<5;i++)
   {
     printf("The value is %d and addresses is %p \n",arr1[i],ptr1);
     ptr1=ptr1+1;
   }
    double *ptr2=arr2;
    for(int i=0;i<6;i++)
   {
     printf("The value is %lf and addresses is %p \n",arr2[i],ptr2);
     ptr2=ptr2+1;
   }
 }
