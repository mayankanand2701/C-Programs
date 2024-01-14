#include <stdio.h>
int main(void)
{
    int m=0,n=0,max=0,min=0;
    printf("Enter the value of m = ");
    scanf("%d",&m);
    printf("Enter the value of n = ");
    scanf("%d",&n);
    if(m>n)
    {
        max=m;
        min=n;
    }
    else 
    {
        max=n;
        min=m;
    }
    printf("All the number from %d to %d is : \n",min,max);
    for(int i=min;i<=max;i++) printf("%d\n",i);
    printf("All the number from %d to % d is : \n",max,min);
    for(int i=max;i>=min;i--) printf("%d\n",i);
}