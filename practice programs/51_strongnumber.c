#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("enter number: ");
	scanf("%d", &n);
	
	int original=n;
	
    int rem,i,f;     //r=remainder, f=factorial
    int sum=0;
	
	while (n!=0) {
    	rem=n%10;
    	
    	f=1;
    	for (i=1; i<=rem; i++) {
    		f=f*i;
		}
    	
    	sum=sum+f;
		n=n/10; 
	}
	 
	 
	if (sum==original) {
		printf("%d is a STRONG number", original);
	}
	
	else {
		printf("%d is not a STRONG number", original);
	}
return 0;
}

