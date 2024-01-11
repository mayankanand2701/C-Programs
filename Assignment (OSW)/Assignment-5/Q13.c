#include <stdio.h>
int distict_elements(int a[], int n)
{
  int res[n];
  int count=0;
  int i, j;
  for (i=0; i<n; i++)
  {
     for (j=0; j<i; j++) 
     {
        if (a[i] == a[j])break;
     }
     if (i == j)
     {
        res[count]=a[i];
        count++;
      }
  }
  printf("All the distinct elements of the array is = ");
  for(int i=0;i<count;i++) printf("%d ",res[i]);
}
int main()
{
  int size;
  printf("Enter the size of array : ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter the elements of the array = ");
  for(int i=0;i<size;i++) scanf("%d",&arr[i]);
  distict_elements(arr,size);
}



