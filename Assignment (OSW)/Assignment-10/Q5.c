#include <stdio.h>
int main(void)
{
    char str[30]="SABCDE";
    char *ptr=str;
    for(int i=0;str[i]!='\0';i++) printf("%c",ptr[i]);
}