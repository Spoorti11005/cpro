/*prg to find biggest of two num using conditional operator.*/
/*#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\n enter any two nums:");
scanf("\n %d%d",&a,&b);
(a>b)? printf("\n %d is big",a):printf("\n %d is big",b);

getch();
}*/

/*prg to find biggest of two num using if condition.*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\n enter any two nums:");
scanf("\n %d%d",&a,&b);
if(a>b)
{
printf("\n %d is big",a);
}
if(b>a)
//else
{
printf("\n %d is big",b);
 }
getch();
}