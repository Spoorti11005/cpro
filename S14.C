/*prg to perform basic arithematic operations.*/
#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,sum,sub,prod,div,avg;
clrscr();
printf("\n Enter the values a and b:");
scanf("\n %f%f",&a,&b);
sum=a+b;
sub=a-b;
prod=a*b;
div=a/b;
avg=sum/2;
printf("\n sum of a and b=%f",sum);
printf("\n sub of a and b=%f",sub);
printf("\n prod of a and b=%f",prod);
printf("\n div of a and b=%f",div);
printf("\n average  of a and b=%f",avg);
getch();
}
