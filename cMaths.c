// This is a sample C Program for basic mathematical operations 
#include <stdio.h>
 
int main()
{
   int first, second, add, subtract, multiply;
   float divide;
   int squre;
 
   printf("Enter two integers\n");
   scanf("%d%d", &first, &second);
 
   add        = first + second;
   subtract = first - second;
   multiply = first * second;
   squre = first * first;
   divide     = first / (float)second;   //typecasting
 
   printf("Sum = %d\n",add);
   printf("Difference = %d\n",subtract);
   printf("Multiplication = %d\n",multiply);
   printf("Division = %.2f\n",divide);
   printf("Squre = %d\n",squre);
   return 0;
}
