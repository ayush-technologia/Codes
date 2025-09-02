//Checking the nature of roots
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
printf("Quadratic equation of form ax^2+bx+c");
int a,b,c,d;
clrscr();
printf("Enter the coefficent of x square:");
scanf("%d",&a);
printf("Enter the coefficient of x:");
scanf("%d",&b);
printf("Enter the constant term:");
scanf("%d",&c);
d=b*b-4*a*c;
if (d>0)
printf("The root are real\n");
else if (d==0)
printf("The roots are real and perfect\n");
else
printf("The roots are unreal or imaginary\n");
getch();
}

