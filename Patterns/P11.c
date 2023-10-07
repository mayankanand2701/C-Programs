// To print the pattern
//          *
//        * *
//      * * *
//    * * * *
//  * * * * *
#include <stdio.h>
int main(void)
{
    int row;
    printf("Enter the number of rows = ");
    scanf("%d",&row);
    for(int r=1;r<=row;r++)
    {
        for(int sp=1;sp<=row-r;sp++)printf("  ");
        for(int c=r;c>=1;c--)printf("* ");
        printf("\n");
    }
}