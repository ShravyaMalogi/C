#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);

	int original=n;
	
	int compo;                     //compo=composite
	for (int i=2; i<n; i++) {
		if (n%i==0) {
		    n=compo;
		}
	}
	
	if (n==compo) {
		printf("%d is NOT A PRIME number", original);
	}
	
	else {
		printf("%d is a PRIME number", original);
	}
	
return 0;
}

