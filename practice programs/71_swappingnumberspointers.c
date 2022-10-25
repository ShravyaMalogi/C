#include<stdio.h>
#include<conio.h>

void swap(int x, int y);
void _swap(int *x, int *y);

int main()
{
	int a=3;
	int b=5;
	
	printf("call by value\n");
	swap(a,b);
	printf ("a = %d & b = %d \n", a,b);
	
	printf(" \n");
	
	printf("call by reference\n");
	_swap(&a,&b);
	printf ("a = %d & b = %d \n", a,b);
	
return 0;
}

//call by value
void swap(int x, int y) {
	int t = x;
	x = y;
	y = t;
	printf ("a = %d & b = %d \n", x,y);
}

//call by reference
void _swap(int *x, int *y) {
	int t = *x;
	*x = *y;
	*y = t;
	printf ("a = %d & b = %d \n", *x,*y);
}
