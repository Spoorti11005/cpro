/*prg to check whether given num is +ve or -ve using conditional operator.*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\n enter any number:");
scanf("\n %d",&n);
(n>0)? printf("\n n=%d is +ve number"): printf("\n n=%d is -ve number");
getch();
}
