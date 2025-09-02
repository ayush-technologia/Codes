//Perimeter,Area of a rectangle

#include <stdio.h>
#include <conio.h>
void main()
{
int l,b,area,perimeter;
clrscr();
printf("Enter the integer value of length:");
scanf("%d",&l);
printf("Enter the integer value of breadth:");
scanf("%d",&b);
perimeter=2*(l+b);
area=l*b;
printf("Perimeter of rectangle is %d\n",perimeter);
printf("Area of rectangle is %d",area);
getch();
}