#include <stdio.h>

int sum(int arr[],int size)
{
    if(size==0)return 0;
    return arr[size-1]+sum(arr,size-1);
}
int main(void)
{
    int n;
    printf("Enter the size of the array = ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array = \n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("The sum of all elements of the array is = %d",sum(arr,n));
}
