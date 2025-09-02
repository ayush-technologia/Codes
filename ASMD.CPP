//Addition,Subtraction,Multiplication,Division

#include <stdio.h>
#include <conio.h>
void main()
{
float a,b,sum,sub,mul,div;
clrscr();
printf("Enter the value of a:");
scanf("%f",&a);
printf("Enter the value of b:");
scanf("%f",&b);
sum =a+b;
sub=a-b;
mul=a*b;
div=a/b;
printf("The sum of %f and %f is %f\n",a,b,sum);
printf("Subtraction of %f from %f is %f\n",b,a,sub);
printf("Multiplication of %f and %f is %f\n",a,b,mul);
printf("Division of %f by %f is %f",a,b,div);
getch();
}