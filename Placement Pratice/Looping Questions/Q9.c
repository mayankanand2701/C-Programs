#include <stdio.h>
int main(void)
{
    int a=0,b=0,gcd=0,lcm=0,m=0,n=0;
    printf("Enter the First Number = ");
    scanf("%d",&m);
    printf("Enter the Second Number = ");
    scanf("%d",&n);
    // HCF of two numbers
    a=m;
    b=n;
    while(b!=0)
    {
        int rem=b;
        b=a%b;
        a=rem;
    }
    gcd=a;
    lcm=(m*n)/gcd;
    printf("The HCF/GCD of two %d and %d is : %d\n",m,n,gcd);
    printf("The LCM of %d and %d is : %d\n",m,n,lcm);
}