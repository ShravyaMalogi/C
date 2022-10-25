#include<stdio.h>
#include<conio.h>

int main()
{
	printf("will your number input be a multiple of 7? \n");
	
	int n;
	do {
		printf("enter number: ");
		scanf("%d", &n);
		
		if(n%7==0) {
			break;
		}
		
		printf("nope! \n");
		
	} while (1); //meaning that the condition is true always
	
	printf("you did it! %d is a multiple of 7", n);

return 0;
}

