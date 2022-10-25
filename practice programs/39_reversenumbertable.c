#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("enter number: ");
	scanf("%d", &n);
	
	int p; //product
	for(int i=10; i>=1; i--) {
		p=n*i;
		printf("%d x %d = %d \n", n,i,p);
	} 

return 0;
}

