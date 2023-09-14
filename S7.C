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
/*#include<stdio.h>
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
} */

/* prg to swap two num using pointer.*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,*ptr1,*ptr2;
clrscr();
printf("\n Enter i and j value:");
scanf("\n %d%d",&i,&j);
ptr1=&i;
ptr2=&j;
printf("\n before swapping i=%d,j=%d",*ptr1,*ptr2);
ptr1=&j;
ptr2=&i;
printf("\n after swapping i=%d,j=%d",*ptr1,*ptr2);
getch();
}


