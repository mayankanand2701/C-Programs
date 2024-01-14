#include <stdio.h>
int main(void)
{
  int row=0;
  printf("Enter the number of rows = ");
  scanf("%d",&row);
  for(int i=1;i<=row;i++)
  {
     for(int sp=1;sp<=row-i;sp++) printf("  ");
     for(int j=1;j<=i;j++) printf("%d ",j);
     for(int k=i-1;k>=1;k--) printf("%d ",k);
     printf("\n");
  }
  for(int i=1;i<=row;i++)
  {
     for(int sp=1;sp<=i;sp++) printf("  ");
     for(int j=1;j<=row-i;j++) printf("%d ",j); 
     for(int k=row-i-1;k>=1;k--) printf("%d ",k);
     printf("\n");
  }
}
