#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	double principle , rate , time , n, CI, A;

	clrscr();
	printf("enter the principle amount: ");
	scanf("%lf" , &principle);
	printf("enter the annual interest rate :");
	scanf("%lf", &rate);
	rate = rate/100;
	printf("enter the number of times that interest is compounded annually: ");
	scanf("%lf", &n);
	
	A = principle* pow((1+rate/n) , n*time);
	CI = A-principle;
	printf(" The compound interest is: %.21f\n" , CI);
	return 0;
	getch();
	
	}
