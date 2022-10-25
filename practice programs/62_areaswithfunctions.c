#include<stdio.h>
#include<conio.h>
#include<math.h>

float square(float s);
float circle(float r);
float rectangle(float l,float b);

int main()
{
	float l=5;
	float b=2;
	
	printf("area is: %f", rectangle(l,b));
	
return 0;
}

float square(float s) {
	return pow(s,2);
}

float circle(float r) {
	float pie=3.14;
	return pie*pow(r,2);
}

float rectangle(float l,float b) {
	return l*b;
}
