//Write a program to calculate compound interest.
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float p, r, t, ci, amount;
    clrscr();
    printf("Enter Principal, Rate, Time: ");
    scanf("%f %f %f", &p, &r, &t);

    amount = p * pow((1 + r / 100), t);
    ci = amount - p;

    printf("Compound Interest = %.2f", ci);
    getch();
}
