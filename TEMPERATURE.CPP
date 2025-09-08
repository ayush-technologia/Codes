//Celsius to Fahrenheit

#include <stdio.h>
#include <conio.h>
void main()
{
float cel,fah;  //Assigning the values
clrscr();
printf("Enter the value of temp. in degree celsius:");
scanf("%f",&cel);
fah=(cel*9/5)+32;
printf("%f degree celsius in fahrenheit is %f",cel,fah);
getch();
}

