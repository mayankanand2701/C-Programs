#include <stdio.h>
int main(void)
{
   int arr[]={0,10,20,30,40,50,60,70,80,90};
   for(int i=0;i<10;i++)
   {
     int *ptr=&arr[i];
     printf("%p \n",ptr);
   }
 }
