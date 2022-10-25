#include<stdio.h>
#include<conio.h>
int largest(int a, int b, int c);

int main()
{
	int a,b,c;
	printf("enter three numbers: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	largest(a,b,c);

return 0;
}

int largest(int a, int b, int c){
	
	int l;                // l=largest
	if (a>b && a>c) {
		l=a;
	} 
	
	else if (b>a && b>c) {
		l=b;
	}
	
	else if (c>a && c>b) {
		l=c;
	}
	
	printf("%d is the largest number", l);
	return 0;
}
