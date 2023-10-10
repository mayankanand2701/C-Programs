// To print the pattern
// 1 2 3 4
// 1     4
// 1     4
// 1 2 3 4


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
            if(r==1||c==1||r==row||c==row)printf("%d ",c);
            else printf("  ");
        }
        printf("\n");
    }
}