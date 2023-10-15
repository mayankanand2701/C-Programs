// Program to check whether a number is Compo-Special Number or not
// A number is said to be Compo-Special Number if all its digit are Composite
#include <stdio.h>
int main(void)
{
    int num,pot=0;
    printf("Enter the number = ");
    scanf("%d",&num);
    while(num>0)
    {
        int dig=num%10;
        if(dig==4||dig==6||dig==8||dig==9) pot=0;
        else
        {
            pot=1;
            break;
        }
        num=num/10;
    }
    if(pot==0)printf("Compo-Special Number");
    else printf("Not a Compo-Special Number");
}