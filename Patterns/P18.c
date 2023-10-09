// To print the pattern
// 5 4 3 2 1
//   4 3 2 1
//     3 2 1
//       2 1
//         1

#include <stdio.h>
int main(void)
{
    int row;
    printf("Enter the number of rows = ");
    scanf("%d",&row);
    for(int r=1;r<=row;r++)
    {
        for(int sp=r-1;sp>=1;sp--)printf("  ");
        for(int c=(row-r+1);c>=1;c--)printf("%d ",c);
        printf("\n");
    }
}