#include <stdio.h>
int main(void)
{
  int n=0;
  int count=1;
  printf("Enter the number of rows = ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
     for(int j=1;j<=i;j++) printf("%d ",count++);
     printf("\n");
  }
}
