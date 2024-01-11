#include <stdio.h>
int main(void)
{
  int upc[12];
  int osum=0;
  int esum=0;
  int cd=upc[11];
  printf("Enter the UPC Code : ");
  for(int i=0;i<12;i++) scanf("%d",&upc[i]);
  for(int i=0;i<12;i=i+2) osum=osum+upc[i];
  osum=osum*3;
  for(int i=1;i<10;i=i+2) esum=esum+upc[i];
  osum=osum+esum;
  int ld=osum%10;
  if(ld==0) cd=0;
  else cd=10-ld;
  if(cd==upc[11]) printf("Validated");
  else printf("Error in Barcode");
}
