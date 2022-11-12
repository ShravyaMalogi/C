#include<stdio.h>
#include<conio.h>

int main()
{
	//                      METHOD 1
	
	int aadhar[5];
	
	//input
	int *ptr = &aadhar[0];
	for(int i=0; i<5; i++) {
		printf("%d index: ", i);
		scanf("%d", (ptr+i));
	}
	
	//output
	for(int i=0; i<5; i++) {
		printf("%d index: %d\n", i, *(ptr+i));
	}
	
	
	
	//                      METHOD 2
	
	int aadhar[5];
	
	//input
	int *ptr = &aadhar[0];
	for(int i=0; i<5; i++) {
		printf("%d index: ", i);
		scanf("%d", &aadhar[i]);
	}
	
	//output
	for(int i=0; i<5; i++) {
		printf("%d index: %d\n", i, aadhar[i]);
	}
	
return 0;
}

