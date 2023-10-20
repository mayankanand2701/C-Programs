// Program to calculate Profit and Loss from the given transation
#include <stdio.h>
int main(void)
{
    int sp,cp;
    printf("Enter the Cost Price = ");
    scanf("%d",&cp);
    printf("Enter the Selling Price = ");
    scanf("%d",&sp);
    if(sp>=cp)printf("Profit Earned = %d",(sp-cp));
    else if(cp>sp)printf("Loss of  = %d Rs.",(cp-sp));

}