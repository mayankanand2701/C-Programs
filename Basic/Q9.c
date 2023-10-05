// Program to Print Different Inputs in Concat FashionHH
#include <stdio.h>
int main(void)
{
  char fname[10],lname[10];
  int dob;
  printf("Enter the firstname = ");
  scanf("%s",fname);
  printf("Enter the lastname = ");
  scanf("%s",lname);
  printf("Enter the DOB = ");
  scanf("%d",&dob);
  printf("The resultant string is = %s%s%d",fname,lname,dob);
  printf("\n");
}
