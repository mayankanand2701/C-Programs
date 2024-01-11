// Program to search an element in the array
#include <stdio.h>
int linearSearch(const int arr[],int target,int n)
{
   int found=0;
   for(int i=0;i<n;i++)
  {
    if(arr[i]==target)found=i;
  }
  if(found!=0) return found;
  else return -1;
}
int main(void)
{
  int size,found=0,res=0;
  int element=0;
  printf("Enter the size of the array = ");
  scanf("%d",&size);
  int num[size];
  printf("Enter the elements of the array = \n");
  for(int i=0;i<size;i++) scanf("%d",&num[i]);
  printf("Enter the element to be searched = ");
  scanf("%d",&element);
  res=linearSearch(num,element,size);
  if(res!=-1) printf("Element Found at index %d",res);
  else printf("Element not Found");
}

