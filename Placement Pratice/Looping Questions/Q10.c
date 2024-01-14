#include <stdio.h>
int isPrime(int num)
{
    if (num <= 1) return 1;
    int flag=0;
    for(int j=2;j<=num/2;j++)
    {
        if(num%j==0) return 1;
    }
    return 0;
}

int main(void)
{
    int num=0;
    printf("Enter the Number = ");
    scanf("%d",&num);

    // Check it is prime or not
    if(isPrime(num)==0)printf("Prime Number\n");
    else printf("Not a Prime Number\n");

    // to generate a prime number from 1 to n
    printf("All Prime number from 1 to %d is = \n",num);
    for(int i=1;i<=num;i++)
    {
        if(isPrime(i)==0) printf("%d\n", i);
    }

    // to print the factors of that number
    printf("All the factors of %d is = \n",num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0) printf("%d\n",i);
    }

    // to print all the prime factors of the number 
    printf("All the Prime factors of %d is = \n",num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            if(isPrime(i)==0) printf("%d\n",i);
        }
    }
}
