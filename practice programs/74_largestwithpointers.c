#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,z,*a,*b,*c;
	printf("enter three numbers: \n");
	scanf("%d%d%d", &x,&y,&z);
	
	a=&x;
	b=&y;
	c=&z;
	
	int l;                // l=largest
	if (*a>*b && *a>*c) {
		l=*a;
	} 
	
	else if (*b>*a && *b>*c) {
		l=*b;
	}
	
	else if (*c>*a && *c>*b) {
		l=*c;
	}

	printf("%d is the Largest number", l);
return 0;
}

