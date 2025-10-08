//write a program to calculate simple interest.
#include<stdio.h>
#include<conio.h>
void main()
{
int si,p,t,r;
clrscr();
printf("Enter the number:\n");
scanf("%d%d%d",&p,&t,&r);
si=p*t*r/100;
printf("The value of simple interst is %d",si);
getch();
}