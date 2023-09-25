/*prg to find m^n of a given number.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,m,res;
clrscr();
printf("\n Enter the values of n and m:");
scanf("\n %d%d",&m,&n);
res=pow(m,n);
printf("\n m^n of a given number=%d",res);
getch();
}
