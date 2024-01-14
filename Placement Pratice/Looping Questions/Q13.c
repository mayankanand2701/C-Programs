#include <stdio.h>
#include <math.h>
int main(void)
{
  int num=0,nod=0,rev=0;
  printf("Enter the number = ");
  scanf("%d",&num);
  int ncopy=num;
  while(ncopy>0)
  {
    nod++;
    int dig=ncopy%10;
    rev=rev*10+dig;
    ncopy=ncopy/10;
  }
  printf("The number of digits in the number is = %d\n",nod);
  printf("The reverse of the number is = %d\n",rev);
  if(rev==num) printf("Palindrome Number\n");
  else printf("Not a Palindrome Number\n");
  // to calculate the Armstrong number 
  //ncopy=num;
  //int res=0;
  //while(ncopy>0)
  //{
  //  int dig=ncopy%10;
  //  res=res+(int)pow((double)dig,nod);
  //  ncopy=ncopy/10;
  //}
 // if(res==num) printf("Armstrong Number\n");
  //else printf("Not a Armstrong Number\n");
}
