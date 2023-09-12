/*prg to check whether given num is even or odd using conditional operator.*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\n enter any num:");
scanf("%d",&n);
(n%2==0) ? printf("\n n=%d is even number"): printf("\n n=%d is odd number");
getch();
}
