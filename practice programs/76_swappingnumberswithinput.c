#include<stdio.h>
#include<conio.h>

void swap(int *a, int*b);
int main()
{
	int x,y;
	printf("Enter first number: ");
	scanf("%d", &x);
	printf("Enter second number: ");
	scanf("%d", &y);
	printf("Before Swapping: first number = %d and second number = %d \n", x,y);
	
	swap(&x, &y);
	printf("After Swapping: first number = %d and second number = %d", x,y);

return 0;
}

void swap(int *a, int*b) {
	int c=*a;
	*a=*b;
	*b=c;
}
