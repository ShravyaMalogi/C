#include<stdio.h>
#include<conio.h>
int primecheck (int n);

int main()
{	
	int x;
	printf("enter a number: ");
	scanf("%d", &x);
	
	if(primecheck(x)==1){
		printf("%d is PRIME", x);
	}

	else {
		printf("%d is NOT PRIME", x);
	}

return 0;
}

int primecheck (int n) {
	
	for (int i=2; i<=n/2; i++) {
		if(n%i==0) {
			return 0;
		}
	}
	
	return 1;
}

