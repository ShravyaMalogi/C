#include<stdio.h>
#include<conio.h>

int main()
{
	float c,f,k; 
	/* c=celsius
	   f=fahrenheit
	   k=kelvin */
	printf("enter temperature in celsius : ");
	scanf("%f", &c);
	
	//conversion to fahrenheit
	f=1.8*c+32;
	
	//conversion to kelvin
	k=273.15+c;
	
	printf("temperature in fahrenheit is: %f \n", f);
	printf("temperature in kelvin is:%f \n", k);

return 0;
}

