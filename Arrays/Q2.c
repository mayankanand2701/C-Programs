// Program to search an element in the array
#include <stdio.h>
int main(void)
{
  int size,found=0;
  int element=0;
  printf("Enter the size of the array = ");
  scanf("%d",&size);
  int num[size];
  
  printf("Enter the elements of the array = \n");
  for(int i=0;i<5;i++) scanf("%d",&num[i]);
  printf("Enter the element to be searched = ");
  scanf("%d",&element);
  for(int i=0;i<5;i++)
  {
    if(num[i]==element)found=1;
  }
  if(found==1) printf("Element Found");
  else printf("Element not Found");
  printf("\n");
}
