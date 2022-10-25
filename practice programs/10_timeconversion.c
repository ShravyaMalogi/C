#include<stdio.h>
#include<conio.h>

int main()
{
	int sec,h,m,s;  //sec=seconds to be entered by the user
	/* h=hours
	   m=minutes
	   s=seconds */
	printf("enter time in seconds: ");
	scanf("%d", &sec);
	   
	h=sec/3600;
	m=(sec-h*3600)/60;
	s=sec-h*3600-m*60;
	
	printf("%d hours: %d minutes: %dseconds",h,m,s);
	
return 0;
}

