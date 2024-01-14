#include <stdio.h>
int main(void)
{
    int x=0,n=0,res=1;
    printf("Enter the value of Base = ");
    scanf("%d",&x);
    printf("Enter the value of Exponent = ");
    scanf("%d",&n);
    printf("%d reaised to the power %d is : ",x,n);
    for(int i=1;i<=n;i++) res=res*x;
    printf("%d",res);
}