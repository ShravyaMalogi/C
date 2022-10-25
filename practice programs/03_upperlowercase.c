#include<stdio.h>
#include<conio.h>

int main()
{
	char ch;
	printf("enter letter : ");
	scanf("%s", &ch);
	
	if(ch>= 'A' && ch<='Z') {
		printf("upper case letter");
	}
	
	else if(ch>= 'a' && ch<= 'z') {
		printf("lower case letter");
	}
	
	else {
		printf("not valid");
	}










return 0;
}

