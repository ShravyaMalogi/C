#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
	printf("enter the year: ");
	scanf("%d", &a);
	
	if(a%4==0) {
		printf("it is a leap year");
	}
	
	else {
		printf("it is not a leap year");
	} 

return 0;
}

