// Program to count the number of digits for the input number
#include <stdio.h>
int main(void)
{
    int num,count=0;
    printf("Enter the number = ");
    scanf("%d",&num);
    while(num!=0)
    {
        count=count+1;
        num=num/10;
    }
    printf("The number of digits in the number is = %d \n",count);
}