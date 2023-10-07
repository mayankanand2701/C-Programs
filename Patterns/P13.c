// To print the pattern
//          5
//        5 4
//      5 4 3
//    5 4 3 2
//  5 4 3 2 1
#include <stdio.h>
int main(void)
{
    int row;
    printf("Enter the number of rows = ");
    scanf("%d",&row);
    for(int r=1;r<=row;r++)
    {
        for(int sp=1;sp<=row-r;sp++)printf("  ");
        for(int c=row;c>=(row-r+1);c--)printf("%d ",c);
        printf("\n");
    }
}