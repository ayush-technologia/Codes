//To find the leap year or not
#include <stdio.h>
#include <conio.h>
void main()
{
int ly;
clrscr();
printf("Enter year:");
scanf("%d",&ly);
if (ly%4==0)
printf("%d is a leap year",ly);
else
printf("%d is not a leap year",ly);
getch();
}
