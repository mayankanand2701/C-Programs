// Program to check whether a number is Armstrong or not
// A number is said to be Armstrong if the summation of each digit of the number raised to the 
// power as the number of digits is same as the number itself
#include <stdio.h>
int main(void)
{
    int num,count=0,cnum=0;
    printf("Enter the number = ");
    scanf("%d",&num);
    cnum=num;
    int fnum=num;
    while(num>0)
    {
        int dig=num%10;
        count++;
        num=num/10;
    }
    int number=0;
    while(cnum>0)
    {
        int dig=cnum%10;
        int power = 1;
        // to calculte the each digit raised to the number of digits 
        for (int i = 0; i < count; i++)  power *= dig;
        number=number+power;
        cnum=cnum/10;
    }
    if(fnum==number)printf("Armstrong Number ");
    else printf("Not a Armstrong Number");
}