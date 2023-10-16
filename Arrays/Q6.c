// Program to input a number at a specific postion in an array
#include <stdio.h>
int main(void)
{
  int arr[100];
  int size,element,index;
  printf("Enter the size of the array = ");
  scanf("%d",&size);
  printf("Enter the elements of the array = \n");
  for(int i=0;i<size;i++) scanf("%d",&arr[i]);

  // Assumption : User only enter the valid index positions
  printf("Enter the index at which you want to enter the data = ");
  scanf("%d",&index);
  printf("Enter the data of that index = ");
  scanf("%d",&element);

  printf("The elements of the array is (Bfore Operation) = \n ");
  for(int i=0;i<size;i++) printf("%d  ",arr[i]);
  printf("\n");

  for(int i=size-1;i>=index;i--) arr[i+1]=arr[i];
  arr[index]=element;

  printf("The elements of the array is (After Operation) = \n ");
  for(int i=0;i<size+1;i++) printf("%d  ",arr[i]);
  printf("\n");
}
