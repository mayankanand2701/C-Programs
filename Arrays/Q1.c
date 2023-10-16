// Program to input the array of size n and print the sum and product of its elements
#include <stdio.h>
int main(void)
{
  int size,sum=0;
  int pro=1;
  printf("Enter the size of the array = ");
  scanf("%d",&size);
  int num[size];
  
  printf("Enter the elements of the array = \n");
  for(int i=0;i<size;i++) scanf("%d",&num[i]);
  for(int i=0;i<size;i++)
  {
    sum=sum+num[i];
    pro=pro*num[i];
  } 
  printf("Sum of all the elements of the array is = %d \n ",sum);
  printf("Product of all the elements of the array is = %d \n ",pro);
  printf("\n");
}
