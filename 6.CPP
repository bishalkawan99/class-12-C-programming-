//write a program to find the  sum, difference, product, and division of two numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,sum,diff,pro,div;
printf("Enter the two numbers:\n");
scanf("%d%d",&a,&b);
sum=a+b;
diff=a-b;
pro=a*b;
div=a/b;
printf("The sum is %d\n",sum);
printf("The difference id %d\n",diff);
printf("The product is %d\n",pro);
printf("The division is %d\n",div);
getch();
}