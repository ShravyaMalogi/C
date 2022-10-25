#include<stdio.h>
#include<conio.h>

int main()
{
	char ch;
	printf("enter character: ");
	scanf("%c", &ch);
	
	if (ch>'a' && ch<'z') {
		printf("%c is an alphabet", ch);
	}
	
	else if (ch>'A' && ch<'Z') {
	    printf("%c is an alphabet", ch);
	}
	
	else {
		printf("%c is not an alphabet", ch);
	}

return 0;
}

