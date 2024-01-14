#include <stdio.h>
int main(void)
{
  int num=0;
  printf("Enter the number = ");
  scanf("%d",&num);
  printf("The table of %d is : \n",num);
  for(int i=1;i<=10;i++) printf("%d X %d = %d\n",num,i,num*i);
  printf("\nThe table from 1 to %d is : \n",num);
  for(int i=1;i<=num;i++)
  {
    for(int j=1;j<=10;j++)
    {
      printf("%d X %d = %d\n",i,j,j*i);
    }
    printf("\n");
  }
}
