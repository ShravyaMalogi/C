#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);

	int original=n;
	
	int rem,digit;           //r=remainder
	//counting digits
	while(n!=0) {
		digit++;
		n=n/10;
	}
	
	n=original;
	
	int sum=0;
	while(n!=0) {
		rem=n%10;
		sum=sum+pow(rem,digit);
		n=n/10;
	}
	
	if (sum==original) {
		printf("%d is ARMSTRONG number", original);
	}
	
	else {
		printf("%d is NOT ARMSTRONG number", original);
	}
	
return 0;
}

