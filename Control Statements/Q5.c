// Program to print the sum and average of first n natural number 
#include <stdio.h>
int main(void)
{
    int n,sum=0,avg=0;
    printf("Enter the upper limit = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) sum=sum+i;
    printf("The Sum of first  %d natural number is : %d \n",n,sum);
    printf("The Average of first  %d natural number is : %lf",n,(sum/(double)n));
}