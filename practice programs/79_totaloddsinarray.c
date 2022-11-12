#include<stdio.h>
#include<conio.h>
void odd(int arr[], int n);

int main()
{
	int arr[5]= {23,7,56,3,98};
	odd(arr, 5);

return 0;
}

void odd(int arr[], int n) {

	int count=0;
	for(int i=0; i<n; i++) {
		if (arr[i]%2!=0) {
			count++;
		}
	}
	
	printf("%d", count); 
}
