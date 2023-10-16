// Program to print the largest,smallest,second largest and second smallest from the array
#include <stdio.h>
#include <limits.h>
int main(void)
{
  int size;
  printf("Enter the size of the array = ");
  scanf("%d",&size);
  
  int smin=INT_MAX;
  int min=INT_MAX;
  int smax=INT_MIN;
  int max=INT_MIN;
  int num[size];
  
  printf("Enter the elements of the array = \n ");
  for(int i=0;i<size;i++) scanf("%d",&num[i]);
  for(int i=0;i<size;i++)
  {
    if(num[i]>max) max=num[i];
    if(num[i]<min) min=num[i];
  }
   for(int i=0;i<size;i++)
  {
    if(num[i]>smax && num[i]!=max) smax=num[i];
    if(num[i]<smin && num[i]!=min) smin=num[i];
  }
  printf("Largest element in the array is = %d\n",max);
  printf("Smallest element in the array is = %d\n", min);
  printf("Second Largest element in the array is = %d\n",smax);
  printf("Second Smallest element in the array is = %d\n",smin);
}