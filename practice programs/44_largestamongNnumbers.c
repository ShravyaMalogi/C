#include<stdio.h>
#include<conio.h>

int main()
{
	int n,a,l;
	
//		n=number of inputs
//		a=numbers to be entered by user
//		l=largest
	
	printf("how many numbers do you want to enter? \n");
	scanf("%d", &n);
	printf("enter number 1: ");
	scanf("%d", &a);
	l=a;
	
	int i=2;
	do {
		printf("enter number %d: ", i);
		scanf("%d", &a);
		if (a>l) {
			l=a;
		}
		
		i++;
	} while (i<=n);

	printf("largest number among them is %d", l);

return 0;
}

