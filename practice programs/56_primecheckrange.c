#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	printf("enter minimum value: ");
	scanf("%d", &a);
	printf("enter maximum value: ");
	scanf("%d", &b);
	
	int prime;
	for (int i=1; i<=a && i>=b; i++) {
		if (i%2!=0 && i>=2) {
			i=prime;
		}
		
		printf("%d ",prime);
	}
return 0;
}

