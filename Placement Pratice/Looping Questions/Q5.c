#include <stdio.h>
int main(void)
{
    int sum=0,n=0;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    printf("Sum of all numbers from 1 to %d is :  ",n);
    for(int i=1;i<=n;i++) sum=sum+i;
    printf("%d\n",sum);
}