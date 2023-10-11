// To find the largest among two numbers
// To find the smallest just change the condition
#include <stdio.h>
int main(void)
{
    int num,num1;
    printf("Enter the first number = ");
    scanf("%d",&num);
     printf("Enter the second number = ");
    scanf("%d",&num1);
    if(num>=num1) printf("Largest Number is = %d",num);
    else printf("Largest number is = %d",num1);
}