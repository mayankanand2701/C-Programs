// Program to input a character and find whether they are alphabet or digit or special symbol
#include <stdio.h>
int main(void)  
{  
    char ch;  
    printf("Input a character: ");  
    scanf("%c",&ch);  
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))  printf("This is an alphabet.\n");  
    else if(ch>='0' &&ch<='9') printf("This is a digit.\n");  
    else printf("This is a special character.\n");    
}
