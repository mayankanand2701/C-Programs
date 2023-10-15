// Program to check whether a number is DigoPrime or not
// A number is said to be DigoPrime if all its digit are Prime
#include <stdio.h>
int main(void)
{
    int num,pot=0;
    printf("Enter the number = ");
    scanf("%d",&num);
    while(num>0)
    {
        int dig=num%10;
        if(dig==2||dig==3||dig==5||dig==7) pot=0;
        else
        {
            pot=1;
            break;
        }
        num=num/10;
    }
    if(pot==0)printf("DigoPrime Number");
    else printf("Not a DigoPrime Number");
}