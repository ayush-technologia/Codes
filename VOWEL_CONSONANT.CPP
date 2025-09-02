//Checking the character is vowel or constant
#include <stdio.h>
#include <conio.h>
void main()
{
char ch;
printf("Enter any character value: ");
scanf("%c",&ch);
if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
{printf("%c is a vowel\n",ch);}
else if  (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
{printf("%c is a vowel\n",ch);}
else
printf("It is consonant\n");
getch();
}
