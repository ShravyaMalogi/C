#include<stdio.h>
#include<conio.h>

void printnumbers(int arr[], int n);
void PrintNumbers(int *arr, int n);

int main()
{
	int arr[]= {1,2,3,4,5,6,7};
	PrintNumbers(arr,4);
	return 0;

return 0;
}

void printnumbers(int arr[], int n) {
	for(int i=0; i<n; i++) {
		printf("%d\t", arr[i]);
	}
}

void PrintNumbers(int *arr, int n) {
	for(int i=0; i<n; i++) {
		printf("%d\t", arr[i]);
	}
}
