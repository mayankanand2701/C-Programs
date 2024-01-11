#include <stdio.h>
#include <math.h>
double gp(int n)
{
    if (n==0) return 1;
    double ans = 1/(double)pow(3, n)+gp(n-1);
    return ans;
}
int main()
{
   int num;
   printf("Enter a number: ");
   scanf("%d", &num);
   printf("The result is %lf",gp(num));
}
 