#include <stdio.h>
int main(void)
{
   int arr[]={120,502,118,188,106,447};
   int *ptr=arr;
   printf("The content of the array using pointer is = \n");
   for(int i=0;i<6;i++)
   {
     printf("%d \n",*ptr);
     ptr=ptr+1;
   }
}
