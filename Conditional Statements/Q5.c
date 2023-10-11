// To check whether it is a valid traingle or not
#include <stdio.h>
int main(void)
{
    int num,num1,num2;
    printf("Enter the first angle = ");
    scanf("%d",&num);
    printf("Enter the second angle = ");
    scanf("%d",&num1);
    printf("Enter the third angle = ");
    scanf("%d",&num2);
    if((num+num1+num2)==180) printf("Valid Traingle");
    else printf("Invalid Triangle");
}