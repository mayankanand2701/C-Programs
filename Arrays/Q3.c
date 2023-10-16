// Progam to find maximum and minimum from the array
#include <stdio.h>
#include <limits.h>
int main(void)
{
  int min=INT_MAX;
  int max=INT_MIN;
  int size;
  printf("Enter the size of the array = ");
  scanf("%d",&size);
  int num[size];
  
  printf("Enter the elements of the array = \n");
  for(int i=0;i<size;i++) scanf("%d",&num[i]);
  for(int i=0;i<size;i++)
  {
    if(num[i]>max) max=num[i];
    if(num[i]<min) min=num[i];
  }
  printf("Largest element in the array is = %d\n",max);
  printf("Smallest element in the array is = %d\n",min);
}
