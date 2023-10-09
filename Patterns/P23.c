// To print the pattern
// 1
// 1 2
// 2 3 4
// 4 5 5 7
// 7 8 9 10 11

#include <stdio.h>
int main(void)
{
    int row,count=1;
    printf("Enter the number of rows = ");
    scanf("%d",&row);
    for(int r=1;r<=row;r++)
    {
        for(int c=1;c<=r;c++)printf("%d ",count++);
        printf("\n");
        count--;
    }
}