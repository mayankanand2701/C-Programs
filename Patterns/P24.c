// To print the pattern
// 1
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1

#include <stdio.h>
int main(void)
{
    int row;
    printf("Enter the number of rows = ");
    scanf("%d",&row);
    for(int r=1;r<=row;r++)
    {
        for(int c=1;c<=r;c++) printf("%d ",c%2);
        printf("\n");
    }
}