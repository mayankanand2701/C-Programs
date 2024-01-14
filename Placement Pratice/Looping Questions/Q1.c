#include <stdio.h>
int main(void)
{
    int n=0;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    printf("All the number from 1 to %d is : \n",n);
    for(int i=1;i<=n;i++) printf("%d\n",i);
}