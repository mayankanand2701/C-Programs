// To print the pattern
//          1
//        2 3
//      4 5 6
//   7 8 9 10 
#include <stdio.h>
int main(void)
{
    int row,count=1;
    printf("Enter the number of rows = ");
    scanf("%d",&row);
    for(int r=1;r<=row;r++)
    {
        for(int sp=1;sp<=row-r;sp++)printf("  ");
        for(int c=r;c>=1;c--)printf("%d ",count++);
        printf("\n");
    }
}