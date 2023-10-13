// Program to count the sum and product of digits of the input number
#include <stdio.h>
int main(void)
{
    int num;
    int sum=0;
    int pro=1;
    printf("Enter the number = ");
    scanf("%d",&num);
    while(num>0)
    {
        int dig=num%10;
        sum=sum+dig;
        pro=pro*dig;
        num=num/10;
    }
    printf("The sum of digits in the number is = %d \n",sum);
    printf("The product of digits in the number is = %d \n",pro);
}