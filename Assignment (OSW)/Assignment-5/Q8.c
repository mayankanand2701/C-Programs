#include <stdio.h>
int main(void)
{
  int size1,size2;
  printf("Enter the size of first array : ");
  scanf("%d",&size1);
  int arr[size1];
  printf("Enter the elements of the array = ");
  for(int i=0;i<size1;i++) scanf("%d",&arr[i]);
  
  printf("Enter the size of second array : ");
  scanf("%d",&size2);
  int arr2[size2];
  printf("Enter the elements of the array = ");
  for(int i=0;i<size2;i++) scanf("%d",&arr2[i]);
  
  int rarr[size1];
  for(int i=0;i<size1;i++) rarr[i]=arr[i]+arr2[i];
  
  printf("Elements of the array adding both the array is = \n");
  for(int i=0;i<size1;i++) printf("%d ",rarr[i]);
}

