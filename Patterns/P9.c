// To print the pattern
//          1
//        2 2
//      3 3 3
//    4 4 4 4
//  5 5 5 5 5
#include <stdio.h>
int main(void)
{
    int row;
    printf("Enter the number of rows = ");
    scanf("%d",&row);
    for(int r=1;r<=row;r++)
    {
        for(int sp=1;sp<=row-r;sp++)printf("  ");
        for(int c=1;c<=r;c++)printf("%d ",r);
        printf("\n");
    }
}