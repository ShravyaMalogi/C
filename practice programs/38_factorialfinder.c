#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);

	int i=1,f; //f=factorial
	f=n*i;
	
	do {
		f=f*i;
		i++;
	} while (i<n);

	printf("%d! = %d \n", n,f);
	
return 0;
}

