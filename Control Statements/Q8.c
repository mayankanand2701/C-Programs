// Program to find the reverse of the number
#include <stdio.h>
int main(void)
{
    int num,rev=0;
    printf("Enter the number = ");
    scanf("%d",&num);
    while(num>0)
    {
        int dig=num%10;
        rev=rev*10+dig;
        num=num/10;
    }
    printf("The Reverse of the number is = %d \n",rev);
}