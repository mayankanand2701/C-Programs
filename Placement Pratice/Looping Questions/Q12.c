#include <stdio.h>
int main(void)
{
  int num=0;
  do{
    printf("Enter the number = ");
    scanf("%d",&num);
    printf("The input number is = %d\n",num);
  }while(num!=99);
}
