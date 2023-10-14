// Program to check whether a number is Palindrome or not
// A number is said to be palindrome if the reverse of the number is same as the number
#include <stdio.h>
int main(void)
{
    int num,cnum=0;
    int rev=0;
    printf("Enter the number = ");
    scanf("%d",&num);
    cnum=num;
    while(num>0)
    {
        int dig=num%10;
        rev=rev*10+dig;
        num=num/10;
    }
    if(cnum==rev)printf("Palindrome Number");
    else printf("Not a Palindrome Number");
}