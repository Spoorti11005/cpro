/*prg to demo printf and scanf(sum and average of 3 nums).*/
#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf
void main()
{
float a,b,c,sum,avg;
clrscr();
printf("\n Enter three nums");
scanf("\n %f%f%f",&a,&b,&c);
sum=a+b+c;
avg=sum/3;
printf("\n sum of three nums=%f",sum);
printf("\n average of three nums=%f",avg);
getch();
}