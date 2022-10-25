#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c;
	printf("enter value a: ");
	scanf("%d", &a);
	
	printf("enter value b: ");
	scanf("%d", &b);
	
	printf("enter value c: ");
	scanf("%d", &c);
	
	if(a<b && a<c) {
		printf("%d is the smallest number", a);
	}
	
	else if(b<a && b<c) {
		printf("%d is the smallest number", b);
	}
	
	else if(c<a && c<b) {
		printf("%d is the smallest number", c);
	}
	
return 0;
}

