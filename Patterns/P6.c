// To print the pattern
// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5
#include <stdio.h>
int main(void)
{
    int row;
    printf("Enter the number of rows = ");
    scanf("%d",&row);
    for(int r=row;r>=1;r--)
    {
        for(int c=r;c<=row;c++)printf("%d ",c);
        printf("\n");
    }
}