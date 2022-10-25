#include<stdio.h>
#include<conio.h>

int factorial(int n);

int main()
{
    printf("factorial of 4 is: %d", factorial(4));
    return 0;
}

int factorial(int n) {
	if (n==1) {
		return 1;
	}
	int fnm1=factorial(n-1);
	int final=fnm1*n;
	return final;
}
