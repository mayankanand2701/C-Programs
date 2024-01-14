#include <stdio.h>
int main(void)
{
    int n=0;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    printf("All the number from %d to 1 is : \n",n);
    for(int i=n;i>=1;i--) printf("%d\n",i);
}