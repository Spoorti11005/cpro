/*prg to find square root of a given number.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float n,sq;
clrscr();
printf("\n Enter any number:");
scanf("\n%f",&n);
sq=sqrt(n);
printf("\n square root of given number is=%0.2f",sq);
getch();
}