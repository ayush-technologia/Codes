//Simple Interest & Compound Interest

#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
int p;
float r,t,a,z,si,ci;
clrscr();
printf("Enter the integer value of principle amount:");
scanf("%d",&p);
printf("Enter the rate of interest (in %):");
scanf("%f",&r);
printf("Enter the time period (in years):");
scanf("%f",&t);
si=(p*r*t)/100;
z=pow((1+r/100),t);
a=p*z;
ci=a-p;
printf("Simple interest for given values is %f\n",si);
printf("Compound interest for given values is %f",ci);
getch();
}