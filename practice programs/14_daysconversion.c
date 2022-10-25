#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int D,d,m,y; // D=number of Days to be entered by the user
	/* d=days
	   m=months
	   y=years */
	printf("enter number of days: ");
	scanf("%d", &D);
	
	y=D/365;
	m=D%365/30;
	d=D%365%30;
	
	printf("%dyears %dmonths %ddays", y,m,d);
	
return 0;
}

