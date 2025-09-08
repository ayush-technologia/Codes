//Checking the positive,negative or for zero valued number

#include <stdio.h>
#include <conio.h>
void main()
{
int x;
clrscr();
printf("Enter any integer value:");
scanf("%d",&x);
if (x>0)
{printf("%d is a positive number.",x);}
else if (x<0)
{printf("%d is a negative number.",x);}
else if (x==0)
{printf("%d is non-negative & non positive number i.e. zero.",x);}
getch();
}
