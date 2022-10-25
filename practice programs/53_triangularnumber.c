#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	
	int original=n;
	
	int sum=0;
	int i=1;
	while (i<=n) {
		sum=sum+i;
		i++;
		if (sum==n) {
			break;
		}
	}
		
	if(sum==original) {
		printf("%d is a TRIANGULAR number", original);
	}
	
	else {
		printf("%d is NOT A TRIANGULAR number", original);
	}
	
return 0;
}

