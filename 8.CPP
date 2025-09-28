//write a program to convert temperature from celsius to Fahrenheit.
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float celsius,fahrenheit;
printf("Enter temperature in celsius:");
scanf("%f",&celsius);
fahrenheit = (celsius * 9 / 5) +32;
printf("Temperature in Fahrenheit: %.2f",fahrenheit);
getch();
}
