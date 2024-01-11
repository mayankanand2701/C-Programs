#include <stdio.h>
int main(void)
{
   int row;
   printf("Enter the number of rows = ");
   scanf("%d",&row);
   char ch='A';
   for(int i=1;i<=row;i++)
   {
      ch='A';
      printf("\n");
      for(int j=1;j<=row-i+1;j++) printf("%c",ch++);
      for(int sp=i;sp>1;sp--)printf("  ");
      for
   }
}
