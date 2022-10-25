#include<stdio.h>
#include<conio.h>

int main()
{
	char ch;
	printf("enter letter: ");
	scanf("%c", &ch);
	
	if(ch>'a' && ch<'z') {
		printf("it is a lowercase letter");
	}
	
	else if(ch>'A' && ch<'Z') {
		printf("it is a uppercase letter");
	}
	
	else {
		printf("not a valid letter!");
	}


return 0;
}

