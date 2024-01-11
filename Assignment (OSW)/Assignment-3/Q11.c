#include <stdio.h>
int main(void)
{
  int choice=0;
  int num=0;
  printf("Menu Options : \n");
  printf("1.Factorial of a number \n");
  printf("2.Prime or not \n");
  printf("3.Odd or even \n");
  printf("4.Exit \n");
  printf("Enter your choice : ");
  scanf("%d",&choice);
  printf("-----------------\n");
  while(choice!=4)
  {
      if(choice==1)
      {
         printf("Enter the number = ");
         scanf("%d",&num);
         int fact=1;
         int n=1;
         while(n<=num)
         {
            fact=fact*n;
            n++;
         }
         printf("Factorial of the number is = %d\n",fact);
      }
      else if(choice==2)
      {
         printf("Enter the number = ");
         scanf("%d",&num);
         int mul=0;
         for(int i=2;i<(num/2);i++)
         {
           if(num%i==0) mul++;
         }
         if(mul==0) printf("Prime Number\n");
         else printf("Not a Prime Number\n"); 
      }
      else if(choice==3)
      {
         printf("Enter the number = ");
         scanf("%d",&num);
         if(num%2==0) printf("Even Number\n");
         else printf("Odd Number\n");
      } 
      else if(choice==4) break;
      else printf("Wrong Choice Entered! \n"); 
      printf("-----------------\n");
      printf("Enter your choice : ");
      scanf("%d",&choice);   
  }
}
