// Program to check if a number is Positive,Negative and Zero
#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter the number = ");
    scanf("%d",&num);
    if(num>0)printf("Number is Positive");
    else if(num<0)printf("Number is Negative");
    else printf("Negative Number");
}