#include<stdio.h>
#include<conio.h>

int main()
{
	float p, R, r, emi;
	/* p=principal amount
	   R=interest Rate for the whole year
	   r=interest rate for each month */
	
	int n;
	// number of monthly installments
	
	printf("enter principal amount");
	scanf("%f", &p);
	
	printf("enter annual interest rate");
	scanf("%f", &R);
	
	printf("enter number of months");
	scanf("%d", &n);
	   
	r=R/(12*100);
	
	emi=p*r*pow(1+r,n)/(pow(1+r,n)-1);
	
	printf("Monthly EMI is : %f", emi);
	
return 0;
}

