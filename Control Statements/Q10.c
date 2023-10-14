// Program to check whether a number is Special or not
// A number is said to be special if the count of even and odd digits in the number is same
#include <stdio.h>
int main(void)
{
    int num,ecount=0,ocount=0;
    printf("Enter the number = ");
    scanf("%d",&num);
    while(num>0)
    {
        int dig=num%10;
        if(dig%2==0)ecount++;
        else ocount++;
        num=num/10;
    }
    if(ecount==ocount)printf("Special Number ");
    else printf("Not a Special Number");
}