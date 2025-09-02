//Displaying relational operators
#include <stdio.h>
#include <conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the integer value of a:");
scanf("%d",&a);
printf("Enter the integer value of b:");
scanf("%d",&b);
printf("Value of %d>%d is %d\n",a,b,a>b);
printf("Value of %d<%d is %d\n",a,b,a<b);
printf("Value of %d>=%d is %d\n",a,b,a>=b);
printf("Value of %d<=%d is %d\n",a,b,a<=b);
printf("Value of %d==%d is %d\n",a,b,a==b);
printf("Value of %d!=%d is %d",a,b,a!=b);
getch();
}
