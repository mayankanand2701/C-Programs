#include <stdio.h>
int main(void)
{
    int n=0;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    // Part a
    printf("All the Even Number between 1 to %d is : \n",n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0) printf("%d\n",i);
    } 
    // Part b
    printf("All the Odd Number between 1 to %d is : \n",n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0) printf("%d\n",i);
    } 
}