//Checking the character is a digit/lower case/upper case/special symbol
#include <stdio.h>
#include <conio.h>
void main()
{
char ch;

printf("Enter any character value: ");
scanf("%c",&ch);
if (ch>='A' && ch<='Z')
printf("%c is upper case character\n",ch);
else if (ch>='a' && ch<='z')
printf("%c is lower case character\n",ch);
else if (ch>='0' && ch<='9')
printf("%c is a digit\n",ch);
else
printf("It is a special character\n");
getch();
}
