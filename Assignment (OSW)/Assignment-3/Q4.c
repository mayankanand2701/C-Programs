#include <stdio.h>
int main(void)
{
  int num=0;
  int sum=0;
  printf("Enter the number = ");
  scanf("%d",&num);
  while(num>0)
  {
    int dig=num%10;
    sum=sum+dig;
    num=num/10;
  }
  if(sum%9==0) printf("The number is divisble by 9 ");
  else printf("The number is not divisible by 9 ");
}
