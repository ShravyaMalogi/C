#include<stdio.h>
#include<conio.h>

int main()
{
	int age[3] = {22,29,34};

	int *ptr = age;              // *ptr=&age[0] is the same as *ptr=age
	int *_ptr = &age[1];
	int *cptr = &age[2];
	
	//difference
	printf("%u, %u\ndifference = %d \n",ptr, cptr, cptr-ptr);

	//comparision
	_ptr = &age[0];
	printf("comparision = %u", ptr == _ptr);
				// false = 0;
				// true = 1;

return 0;
}

