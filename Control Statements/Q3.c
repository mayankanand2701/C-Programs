// Program to print the table of the input number
#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter the number whose table you want to print = ");
    scanf("%d",&n);
    printf("The Table of %d is  : ",n);
    printf("\n");
    for(int i=1;i<=10;i++) printf("%d X %d = %d \n",n,i,n*i);
}