//Volume of a sphere

#include <stdio.h>
#include <conio.h>
void main()
{
float rad,vol;
clrscr();
printf("Enter the value of radius of sphere:");
scanf("%f",&rad);
vol=1.33*3.14*rad*rad*rad;
printf("Volume of sphere having radius %f is %f",rad,vol);
getch();
}