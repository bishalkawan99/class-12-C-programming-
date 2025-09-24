\\Write a program to swap two numbers using a third variable.
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,temp;
printf("Enter the two numbers:\n");
scanf("%d%d",&a,&b);
temp = a;
a = b;
b = temp;
printf("%d \t %d",a,b);
getch();

}
