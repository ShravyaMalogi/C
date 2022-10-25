#include<stdio.h>
#include<conio.h>
#include<math.h>

#define PI 3.141592

int main()
{
	float x,y,r,t; //t=theta
	printf("enter x coordinate");
	scanf("%f", &x);
	printf("enter y coordinate");
	scanf("%f", &y);
	
	r=sqrt(x*x+y*y);
	t=atan(y/x);
	t=180.0*t/PI;
	
	printf("the polar coordinate r is %f \n", r);
	printf("the polar coordinate theta is %f \n", t);


return 0;
}

