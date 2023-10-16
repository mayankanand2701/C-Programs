// Program to delete element from a specific index of the array
#include <stdio.h>
int main(void)
{
  int arr[100];
  int size,index;
  printf("Enter the size of the array = ");
  scanf("%d",&size);
  printf("Enter the value of the array = \n");
  for(int i=0;i<size;i++) scanf("%d",&arr[i]);

  // Assumption : User only enter the valid index positions
  printf("Enter the index at which you want to delete the data = ");
  scanf("%d",&index);

  printf("The elements of the array is (Before Deletion Operation) = \n ");
  for(int i=0;i<size;i++) printf("%d  ",arr[i]);
  printf("\n");

  for(int i=index;i<size-1;i++) arr[i]=arr[i+1];
  
  printf("The elements of the array is (After Deletion Operation) = \n ");
  for(int i=0;i<size-1;i++) printf("%d  ",arr[i]);
  printf("\n");
}
