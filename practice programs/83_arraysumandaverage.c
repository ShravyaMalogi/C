#include<stdio.h>
#include<conio.h>

void sum(int arr[], int n);
void average(int arr[], int n);

int main()
{
	int arr[100];
	int n,i;
	printf("enter n: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		arr[i];
		printf("a[%d] = ", i);
		scanf("%d", &(arr[i]));
	}
	
	int total=0;
	for(i=0; i<n; i++) {
		total=total+arr[i];
	}
	printf("sum is: %d \n", total);
	
	int average;
	average=total/n;
	printf("average is: %d", average);
	
return 0;
}
