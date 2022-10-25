#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	printf("enter a number: ");
	scanf("%d", &a);
	printf("enter a number: ");
	scanf("%d", &b);
	
	int A=a;
	
	if (a>b) {
		a=b;
		b=A;
	}
	
	int hcf;
	for (int i=1; i<=b; i++) {
		if (a%i==0 && b%i==0) {
			hcf=i;
		}
	}
	
	if (hcf==1) {
		printf("co-prime");
	}
	
	else {
		printf("not co-prime");
	}
	
return 0;
}

