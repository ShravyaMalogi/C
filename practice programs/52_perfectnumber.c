#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	
	int original=n;
	
	int f,sum=0;
	for (int i=1; i<n; i++) {
		
		if (n%i==0) {
			sum=sum+i;
		}
			
	}
	
	if (sum==original) {
		printf("%d is a PERFECT number", original);
	}
	
	else {
		printf("%d is NOT A PERFECT number", original);
	}


return 0;
}

