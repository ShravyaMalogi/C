#include<stdio.h>
#include<conio.h>
void table(int n);

int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	table(n);          //   argument/actual parameter
return 0;
}

void table(int n)     //   parameter/formal parameter 
	{
	int p;
	for(int i=1; i<=10; i++) {
		p=n*i;
		printf("%d x %d = %d \n", n,i,p);
	}
}

