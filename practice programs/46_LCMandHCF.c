#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	printf("enter smaller number: ");
	scanf("%d", &a);
	printf("enter bigger number: ");
	scanf("%d", &b);
	
	
	// HCF
	int hcf;  //cf=common factor
	for (int i=1; i<=b; i++) {
		
		if (a%i==0 && b%i==0) {
		      hcf=i;	
		}	
	} 
	
	printf("Highest Common Factor (HCF) is %d \n", hcf);
	
	
	// LCM
	int lcm;
	lcm=(a*b)/hcf;
	
	printf("Least Common Multiple (LCM) is %d \n", lcm);

return 0;
}

