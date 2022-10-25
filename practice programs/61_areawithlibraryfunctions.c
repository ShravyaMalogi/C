#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int s;
	printf("enter value of side: ");
	scanf("%d", &s);
	
	int area;
	area=pow(s,2);
	
	printf("area of the square is: %d", area);

return 0;
}

