#include <stdio.h>
int binarySearch(int arr[],int target,int start,int last)
{
   int found=0;
   while(start<=last)
   {
    int mid=(start+last)/2;
    if(arr[mid]==target) 
    {
      found=1;
      break;
    }
    if(arr[mid]<target)start=mid+1;
    else last=mid-1;
    }
    if(found==1)printf("The Element is Found");
    else printf("The Element is not Found");
}

int main(void)
{
  int size,target;
  printf("Enter the size of first array : ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter the elements of the array = ");
  for(int i=0;i<size;i++) scanf("%d",&arr[i]);
   printf("Enter the target value : ");
  scanf("%d",&target);
  binarySearch(arr,target,0,size-1);
}

