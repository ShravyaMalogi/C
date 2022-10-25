#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("how many numbers do you want to enter? \n");
	scanf("%d", &n);
	
	int i=1;
	int a; 
	float sum;
	do{
		printf("enter number %d: ", i);
		scanf("%d", &a);
		sum=sum+a;
		i++;
	} while (i<=n);
	
	printf("sum is %f \n", sum);
	
	printf("average is %f \n", sum/n);
	
return 0;
}

