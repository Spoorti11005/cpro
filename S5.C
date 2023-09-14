/*prg to find aritematic operations.*/
#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,sum,sub,prod,div;
clrscr();
printf("\n enter any two nums:");
scanf("\n %f%f",&a,&b);
sum=a+b;
sub=a-b;
prod=a*b;
div=a/b;
printf("\n sum of two nums=%f",sum);
printf("\n sub of two nums=%f",sub);
printf("\n prod of two nums=%f",prod);
printf("\n div of two nums=%f",div);
getch();
}
