#include<stdio.h>
#include<conio.h>

float tempconvert(float celsius);

int main()
{
	printf("In fahrenheit it is %f degrees", tempconvert(5));
	return 0;
}

float tempconvert(float celsius) {
	float fahrenheit;
	fahrenheit = celsius*1.8+32;
	return fahrenheit;
}
