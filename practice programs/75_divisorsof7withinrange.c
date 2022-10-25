#include<stdio.h>
#include<conio.h>

int main()
{
	int min, max;
	printf("enter minimum range: ");
	scanf("%d", &min);
	printf("enter maximum range: ");
	scanf("%d", &max);
	
	int *a=&min;
	int *b=&max;
	
	int sum;
	for (int i=*a; i<=*b; i++) {
		if (i%7==0) {
			int x=i;
			printf("%d\t", x);
			sum=sum+i;
		}
	}
		
	printf("\nSum = %d", sum);
		
return 0;
}

