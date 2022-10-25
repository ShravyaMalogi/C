#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	
	int sum;
	int x=0,y=1;
	
	printf("First %d fibonacci terms are \n", n);
	for(int i=1;i<=n;i++)
	{
		printf("%d ", x);
		sum=x+y;
		x=y;
		y=sum;
	}
	
return 0;
}

