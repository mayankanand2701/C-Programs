// Program to copy the elements of one array into another 
#include <stdio.h>
int main(void)
{
  int size;
  printf("Enter the size of the array = ");
  scanf("%d",&size);
  int arr[size];
  int carr[size];

  printf("Enter the elements of the array = \n ");
  for(int i=0;i<size;i++) scanf("%d",&arr[i]);
  for(int i=0;i<size;i++) carr[i]=arr[i];
  printf("Elemnts of the original array is =");
  for(int i=0;i<size;i++) printf("%d  ",arr[i]);
  printf("\n");
  
  printf("Elemnts of the new array after performing copy operation is =");
  for(int i=0;i<size;i++) printf("%d  ",carr[i]);
}
