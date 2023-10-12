// Program to print the factorial of a number
#include <stdio.h>
int main(void)
{
    int n,fact=1;
    printf("Enter the number whose factorial you want to print = ");
    scanf("%d",&n);
    printf("The Factorail of %d is : ",n);
    for(int i=1;i<=n;i++) fact=fact*i;
    printf("%d",fact);
}