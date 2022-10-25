#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a,b,c,d;
	printf("enter coefficient a: ");
	scanf("%d", &a);
	printf("enter coeffecient b: ");
	scanf("%d", &b);
	printf("enter coeffecient c: ");
	scanf("%d", &c);
	
	d=b*b-(4*a*c);
	
	float e,f; //e-positive root, f=negative root
	e=(-b+sqrt(d))/2*a;
	f=(-b-sqrt(d))/2*a;
	
	if(d==0) {
		printf("roots are real and equal \n");
		
		printf("root 1: %f \n", e);
		printf("root 2: %f \n", f);
	}
	
	else if(d>0) {
		printf("roots are real and unequal \n");
		
		printf("root 1: %f \n", e);
		printf("root 2: %f \n", f);
	}
	
	
	else if(d<0) {
		
		int rp;
		float ip;
		/* rp=real part
		   ip=imaginary part */
		
		rp = -b/2*a;
		ip = sqrt(-d)/(2*a);
		
		printf("roots are imaginary \n");
		
		printf("root 1: %d + %fi \n", rp,ip);
		printf("root 2: %d - %fi \n", rp,ip);
	}
	
return 0;
}

