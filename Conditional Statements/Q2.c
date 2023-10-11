// To check if a number is even or not
#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter the number = ");
    scanf("%d",&num);
    if(num%2==0) printf("Even Number");
    else printf("Odd Number");
}