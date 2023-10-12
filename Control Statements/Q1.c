// Program to print first n natural number 
#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter the number till which you want to print the natural number = ");
    scanf("%d",&n);
    printf("The first %d natural number is : ",n);
    printf("\n");
    for(int i=1;i<=n;i++) printf("%d \n",i);
}