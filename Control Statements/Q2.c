// Program to print all the even number till n
#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter the upper limit = ");
    scanf("%d",&n);
    printf("The Even Numbers in the range  is : ");
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)printf("%d \n",i);
    } 
}