// Program to find the largest digit from the given number
#include <stdio.h>
int main(void)
{
    int num;
    int max=-1;
    printf("Enter the number = ");
    scanf("%d",&num);
    while(num>0)
    {
        int dig=num%10;
        if(dig>max)max=dig;
        num=num/10;
    }
    printf("Largest digit among the input number is = %d",max);
}