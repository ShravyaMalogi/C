#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);

	int original=n;
	
	int rem; 
	int rev=0;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	
	if (rev==original) {
		printf("%d is palindrome", original);
	}
	
	else {
		printf("%d is not palindrome", original);
	}
return 0;
}

