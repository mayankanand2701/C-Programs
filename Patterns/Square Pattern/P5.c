// To print the pattern
// * * * * *
// * 2 2 2 *
// * 3 3 3 *
// * 4 4 4 *
// * * * * *

#include <stdio.h>
int main(void)
{
    int row;
    printf("Enter the number of rows = ");
    scanf("%d",&row);
    for(int r=1;r<=row;r++)
    {
        for(int c=1;c<=row;c++)
        {
            if(r==1||c==1||r==row||c==row)printf("* ");
            else printf("%d ",r);
        }
        printf("\n");
    }
}