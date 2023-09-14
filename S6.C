/*prg to swap two num using third variable.*/
/*#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
clrscr();
printf("\n enter any two num:");
scanf("\n %d%d",&a,&b);
printf("\n before swapping a=%d,b=%d",a,b);
temp=a;
a=b;
b=temp;
printf("\n after swapping a=%d,b=%d",a,b);
getch();
}*/

/*prg to swap two nums without using third varaible.*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\n enter any two num:");
scanf("\n %d%d",&a,&b);
printf("\n before swapping a=%d,b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n after swapping a=%d,b=%d",a,b);
getch();
}

