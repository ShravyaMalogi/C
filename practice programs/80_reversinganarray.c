#include<stdio.h>
#include<conio.h>

void reverse(int arr[], int n);

int main()
{
	int arr[5]={2,3,4,5,7};
	reverse(arr,5);

return 0;
}

void reverse(int arr[], int n) {
	
	printf("{");
	for (int i=n-1; i>=0; i--) {
		printf("%d,", arr[i]);
	}
	printf("}");
}
