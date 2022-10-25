#include<stdio.h>
#include<conio.h>

int main()
{
	int i=1;
	char ch;
	
	do {
		printf("%c \n", ch);
		i++;
		
		for(int i=1; i<=5; i++) 
       {
		char ch='*';
		printf("%c", ch);
	   }
		
	} while (i<=4);
	
return 0;
}

