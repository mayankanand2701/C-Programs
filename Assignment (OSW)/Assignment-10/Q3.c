#include <stdio.h>
int main(void)
{
    char str[100];
    printf("Enter the string =");
    scanf("%s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        printf("Character is : %c and the address is : %p\n",str[i],&str[i]);
    }
}