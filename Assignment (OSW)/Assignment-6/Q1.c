#include <stdio.h>
int main(void)
{
   int la=345;
   int fb=4.5;
   char chvar='Z';
   printf("Value is %d and address is %p \n",la,&la);
   printf("Value is %d and address is %p \n",fb,&fb);
   printf("Value is %c and address is %p \n",chvar,&chvar);
 }
