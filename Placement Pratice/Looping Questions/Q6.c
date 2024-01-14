#include <stdio.h>
int main(void)
{
    int n=0;
    int prod=1;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    printf("Product of all the number from 1 to %d is : ",n);
    for(int i=1;i<=n;i++) prod=prod*i;
    printf("%d\n",prod);
}