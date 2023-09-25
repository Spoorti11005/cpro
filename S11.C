/*prg to find area of triangle when three sides are given*/
#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,area,s;
clrscr();
printf("\n Enter three sides");
scanf("\n%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\n area of triangle=%f",area);
getch();
}