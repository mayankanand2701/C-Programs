#include <stdio.h>
int main(void)
{
  int n=0;
  printf("Enter the number of rows = ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
     for(int j=1;j<=n-i;j++) printf("  ");
     for(int j=1;j<=i;j++) 
     {
        if(i==1 || j==1 || i==n || j==n || ) printf("1  ");
        else printf("  ");
     }
     printf("\n");
  }
}
