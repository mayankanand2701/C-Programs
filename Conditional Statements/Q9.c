//  Program to check whether a triangle is Equilateral, Isosceles or Scalene 
#include <stdio.h>
int main(void)
{
    int side1,side2,side3;
    printf("Enter the first side of the traingle = \n");
    scanf("%d",&side1);
    printf("Enter the second side of the traingle = \n");
    scanf("%d",&side2);
    printf("Enter the third side of the traingle = \n");
    scanf("%d",&side3);
    if(side1==side2 && side2==side3 && side3==side1) printf("Equilateral Traingle \n");
    else  if(side1==side2 || side2==side3 || side3==side1) printf("Isosceles Triangle \n");
    else  printf("Scalene Triangle \n");  
}