#include<stdio.h>
int main()
{
int var1 = 3000, var2 = 60, var3 = 360, result;
printf("Enter the first number: ");
scanf("%d", &var1);
printf("Enter the second number: ");
scanf("%d", &var2);
printf("Enter the third number: ");
scanf("%d", &var3);

result = var1 / var2 * var3;
printf("%d divide %d times %d is %d", var1, var2, var3, result);
return 0;
}