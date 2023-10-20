//  Program to accept a grade and declare the equivalent description 
#include <stdio.h>
int main(void)
{
    char ch;
    printf("Enter the Grade = \n");
    scanf("%c",&ch);
    if(ch=='E')printf("Excellent");
    else if(ch=='V')printf("Very Good");
    else if(ch=='G')printf("Good");
    else if(ch=='A')printf("Average");
    else if(ch=='F')printf("Fail");
    else printf("Wrong Grade Opted!");
}