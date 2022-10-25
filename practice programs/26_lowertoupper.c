#include<stdio.h>
#include<conio.h>

int main()
{
	char ch;
	printf("enter a character: ");
	scanf("%c", &ch);
	
	if(ch>='a' && ch<='z') {
		
		ch=ch-32;
		printf("%c is now uppercase", ch);
	}
	
	else {
		printf("letter not valid");
	}

return 0;
}

