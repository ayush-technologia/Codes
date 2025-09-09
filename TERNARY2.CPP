#include <stdio.h>
#include <conio.h>
void main ()
{
int a,b,max;
clrscr();
printf("Enter the value of 1st integer:");
scanf("%d",&a);
printf("Enter the value of 2nd integer:");
scanf("%d",&b);
max=(a>b)? a:b;
printf("Maximum of %d & %d is %d",a,b,max);
getch();
}
