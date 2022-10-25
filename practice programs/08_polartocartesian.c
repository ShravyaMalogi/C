#include<stdio.h>
#include<conio.h>
#include<math.h>

#define PI 3.141592

int main()
{
	float r,t,x,y; //t=theta
	printf("enter value of r : ");
	scanf("%f", &r);
	printf("enter vale of theta : ");
	scanf("%f", &t);
	
	t=t*PI/180.0;
	
	x=r*cos(t);
	y=r*sin(t);
	
	printf("cartesian coordinates are : (%f,%f)", x,y);

return 0;
}

