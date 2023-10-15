// Program to find the smallest digit from the given number
#include <stdio.h>
int main(void)
{
    int num;
    int min=999999;
    printf("Enter the number = ");
    scanf("%d",&num);
    while(num>0)
    {
        int dig=num%10;
        if(dig<min)min=dig;
        num=num/10;
    }
    printf("Smallest digit among the input number is = %d",min);
}