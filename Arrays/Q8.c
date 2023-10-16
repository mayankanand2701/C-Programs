// Program to check whether a number is reverse factorial or not
// Reverse factoril is whether that number is factorial of any numbers
#include <stdio.h>
int main(void)
{
  int fact=1;
  int num=1;
  int ipt,nc=0;
  printf("Enter the number = ");
  scanf("%d",&ipt);
  while(fact<ipt)
  {
     nc=fact;
     fact=fact*num;
     num++;
   }
   if(fact==ipt)printf("Reverse Factorial of %d",num-1);
   else printf("No reverse factorial exist ");
   printf("\n");
 } 
