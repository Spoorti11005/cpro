/*prg to demonstrate increment and decrementing operator.*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
printf("\n Enter i and j value:");
scanf("\n %d%d",&i,&j);
printf("\n before incrementing or decrementing i=%d,j=%d",i,j);
printf("\n after incrementing i=%d",i++);
printf("\n updated value of i=%d",i);
printf("\n after decrementing j=%d",j--);
printf("\n updated value of j=%d",j);
getch();
}