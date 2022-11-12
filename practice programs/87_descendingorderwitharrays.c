#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[100];
	int i,n;
	printf("enter n: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("arr[%d] = ", i+1);
		scanf("%d", &arr[i]);
	}

	int temp;
	for (i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if(arr[i]<arr[j]) {
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	for (i=0; i<n; i++) {
		printf("%d\t", arr[i]); 
	}
	
return 0;
}

