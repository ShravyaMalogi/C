#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	do {
		printf("enter number: ");
		scanf("%d", &n);
		
		if(n%2!=0) {
			break;
		}
		
	} while (1); //meaning that the condition is true always
	
	printf("game over!");
		
return 0;
}

