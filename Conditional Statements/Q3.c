// To check if a student is passed or not
#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter the marks obtained = ");
    scanf("%d",&num);
    if(num>=40) printf("Passed !");
    else printf("Failed !");
}