// To check if a Person is eligible to vote
#include <stdio.h>
int main(void)
{
    int age;
    printf("Enter the age of the perosn = ");
    scanf("%d",&age);
    if(age>=18) printf("Eligible to Vote");
    else printf("Not Eligible to Vote");
}