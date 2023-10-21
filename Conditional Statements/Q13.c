 // Program to read any day number in integer and display the day name in word format.
 // 1 - Monday
 // 7 - Sunday
 #include <stdio.h>
int main(void)
{
    int num;
    printf("Enter the number = \n");
    scanf("%d",&num);
    switch(num)
    {
        case 1:printf("Monday \n");
               break;
        case 2:printf("Tuesday \n");
               break;
        case 3:printf("Wednesday \n");
               break;
        case 4:printf("Thursday \n");
               break;
        case 5:printf("Friday \n");
               break;
        case 6:printf("Saturday \n");
               break;
        case 7:printf("Sunday \n");
               break;
        default:printf("Wrong Option Opted!");
    }
}