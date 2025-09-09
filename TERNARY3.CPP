#include <stdio.h>
#include <conio.h>
void main ()
{
int a,b,c,max;
clrscr();
printf("Enter the 1st integer value:");
scanf("%d",&a);
printf("Enter the 2nd integer value:");
scanf("%d",&b);
printf("Enter the 3rd integer value:");
scanf("%d",&c);
max=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("Maximum among %d,%d & %d is %d",a,b,c,max);
getch();
}
