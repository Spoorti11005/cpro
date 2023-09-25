/*prg to demonstrate gets and puts.*/
#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
clrscr();
printf("\n Enter any string");
gets(str);
printf("\n entered string is:");
puts(str);
getch();
}