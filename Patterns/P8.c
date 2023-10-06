// To print the pattern
//          1
//        1 2
//      1 2 3
//    1 2 3 4
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
        for(int c=1;c<=r;c++)printf("%d ",c);
        printf("\n");
    }
}