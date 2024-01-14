#include <stdio.h>
int main(void)
{
    int n=0,a=0,b=1,sum=0;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    printf("All the Fibonacci number from 1 to %d is :  ",n);
    // Part a
    if(n==1)
    {
        printf("%d",a);
        sum=0;
    }
    else if(n==2) 
    {
        printf("%d  %d  ",a,b);
        sum=1;
    }
    else 
    {
        printf("%d  %d  ",a,b);
        for(int i=3;i<=n;i++)
        {
            sum=a+b;
            a=b;
            b=sum;
            printf("%d  ",sum);
        } 
    }
    // Part b
    printf("\nThe %dth Fibonacci Number is = %d ",n,sum);
}