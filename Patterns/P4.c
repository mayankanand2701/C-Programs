// To print the pattern
// 1
// 2 1 
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
#include <stdio.h>
int main(void)
{
    int row;
    printf("Enter the number of rows = ");
    scanf("%d",&row);
    for(int r=1;r<=row;r++)
    {
        for(int c=r;c>=1;c--)printf("%d ",c);
        printf("\n");
    }
}