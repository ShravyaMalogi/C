#include<stdio.h>
#include<conio.h>

int main()
{
	int n,a,s; 
	
//	n=number of inputs
//	a=number to be entered by user
//	s=smallest
	
	printf("how many numbers do you want to enter? \n");
	scanf("%d", &n);
	
	printf("enter number 1: ");
	scanf("%d", &a);
	s=a;
	int i=2;
		
	do {
		printf("enter number %d: ", i);
		scanf("%d", &a);
		
		if (a<s) {
			s=a;
		}
		
		i++;
	} while (i<=n);

	printf("the smallest among them is %d", s);

return 0;
}

