#include<stdio.h>
#include<conio.h>

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
	
	
	int temp;
for (int j=0; j<n-1; j++) {
	
	for (i=j+1; i<n; i++) {
		arr[i];
		
		if(arr[i]<arr[j]) {
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}
}

printf("%d\t", temp);

//for (i=0; i<n; i++) {
//	printf("%d\t", arr[i]);
//}
return 0;
}

