#include<stdio.h>
#include<conio.h>

int main()
{
	int n; 
	printf("enter number: ");
	scanf("%d", &n);

	int sum=0; 
	int rem;    // r=remainder
	
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	
	printf("sum of digits is %d",sum);
return 0;
}

