// To print the pattern

//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

#include <stdio.h>
int main(void)
{
    int row;
    printf("Enter the number of rows = ");
    scanf("%d",&row);
    for(int r=1;r<=row;r++)
    {
        for(int s=1;s<row-r+1;s++)printf("  ");
        for(int c=1;c<=r;c++)printf("%d ",c);
        for(int k=r-1;k>=1;k--)printf("%d ",k);
        printf("\n");
    }
}