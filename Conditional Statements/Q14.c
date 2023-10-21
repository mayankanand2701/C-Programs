// Program to input any Month Number and displaying the Month name as a word.
// 1 - January
// 3 - March
// 10 -  October
// 12 - December
#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter the number = \n");
    scanf("%d",&num);
    switch(num)
    {
        case 1:printf("January \n");
               break;
        case 2:printf("Feburary \n");
               break;
        case 3:printf("March \n");
               break;
        case 4:printf("April \n");
               break;
        case 5:printf("May \n");
               break;
        case 6:printf("June \n");
               break;
        case 7:printf("July \n");
               break;
        case 8:printf("August \n");
               break;
        case 9:printf("Septemeber \n");
               break;
        case 10:printf("October \n");
               break;
        case 11:printf("November \n");
               break;
        case 12:printf("December \n");
               break;
        default:printf("Wrong Option Opted!");
    }
}