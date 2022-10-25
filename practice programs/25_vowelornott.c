#include<stdio.h>
#include<conio.h>

int main()
{
		char ch;
	printf("enter a character: ");
	scanf("%c", ch);
	
	ch=ch>='A' && ch<='Z'?ch+32:ch;
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
		printf("it is a vowel");
	}
	
	else {
		printf("it is not a vowel", ch);
	}
	



return 0;
}

