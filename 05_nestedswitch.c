#include<stdio.h>
#include<conio.h>

int main()
{
	int number;
	printf("enter number");
	scanf("%d", &number);
	
	if(number >=0) {
		printf("positive \n");
		if(number % 2 == 0) {
			printf("even \n");
		}
		
		else {
			printf("odd \n");
		}
	}
	
	else {
		
		if(number % 2 == 0) {
			printf("even \n");
		}
		
		else {
			printf("odd \n");
		}
		
		printf("negative \n");
	}








return 0;
}

