/*prg to find sum and average.*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum,avg;
clrscr();
printf("\n enter any two num:");
scanf("\n%d%d",&a,&b);
sum=a+b;
avg=a/b;
printf("\n sum of two nums=%d",sum);
printf("\n avg of two nums=%d",avg);
getch();
}
