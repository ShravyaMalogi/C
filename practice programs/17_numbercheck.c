#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a;
	printf("enter number: ");
	scanf("%d", &a);
	
	if(a==0) {
		printf("number is equal to 0");
	}
	
	else if(a>0) {
		printf("number is positive");
	}
	
	else if(a<0) {
		printf("number is negative");
	}
	
	else {
		printf("number not valid!");
	}


return 0;
}

