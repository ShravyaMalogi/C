#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i;
	printf("enter n: ");
	scanf("%d", &n);
	
	int arr[100];
	for(i=0; i<n; i++) {
		arr[i];
		printf("a[%d] = ", i);
		scanf("%d", &(arr[i]));
	}

	int smallest = arr[0];
	for(i=0; i<n; i++) {
		arr[i];
		if(arr[i]<smallest) {
			smallest=arr[i];
		}
	}

	printf("smallest is: %d", smallest);
return 0;
}

