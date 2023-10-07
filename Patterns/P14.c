// To print the pattern
//          5
//        4 5
//      3 4 5
//    2 3 4 5
//  1 2 3 4 5
#include <stdio.h>
int main(void)
{
    int row;
    printf("Enter the number of rows = ");
    scanf("%d",&row);
    for(int r=1;r<=row;r++)
    {
        for(int sp=1;sp<=row-r;sp++)printf("  ");
        for(int c=(row-r+1);c<=row;c++)printf("%d ",c);
        printf("\n");
    }
}