#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,factors=0;
	printf("enter number: ");
	scanf("%d", &n);
	
	for(i=2; i<n; i++) {  // can be also written as i<=n/2
		
		if(n%i==0) 
		{
			factors=2; //it has 2 (or more) factors
			break;
		}
	}
	
	if (factors==0 && n>=2) {
		printf("%d is PRIME", n);
	}
	
	else {
		printf("%d is NOT PRIME", n);
	}
	

return 0;
}

