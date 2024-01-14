#include <stdio.h>
int main(void)
{
    int num=0;
    printf("Enter the Upper Limit = ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=i;j<=num;j++)
        {
            for(int k=j;k<=num;k++)
            {
                if(((i*i)+(j*j))==(k*k)) printf("%d   %d   %d\n",i,j,k);
            }
        }
    }
    
}