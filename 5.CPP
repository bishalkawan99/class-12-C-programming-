//write a program to swap two numbers without usin a third variable.
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
printf("Enter the two numbers:\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d\tb=%d",a,b);
getch();
}