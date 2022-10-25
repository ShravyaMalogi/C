#include<stdio.h>
#include<conio.h>

int main()
{
	int age=22;
	int *ptr= &age;      // * = value at address operator
	int _age=*ptr;       // & = address of
	
	printf("%d",_age);

return 0;
}

