//Finding greatest no. among 3 no.
#include <stdio.h>
#include <conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the 1st integer:");
scanf("%d",&a);
printf("Enter the 2nd integer:");
scanf("%d",&b);
printf("Enter the 3rd integer:");
scanf("%d",&c);
if (a>b && a>c)
{printf("%d is greatest number.",a);}
else if (b>a && b>c)
{printf("%d is greatest number.",b);}
else
{printf("%d is greatest number.",c);}
getch();
}
