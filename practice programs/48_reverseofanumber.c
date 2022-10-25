#include<stdio.h>
#include<conio.h>

int main()
{	
	int n;
	printf("enter number: ");
	scanf("%d", &n);
	
	int rem;      //rem=remainder
	int rev=0;    //rev=reverse 
    while(n!=0)
    {
    	rem=n%10;
    	rev=rev*10+rem;
    	n=n/10;
	}
	
	printf("reverse is %d", rev);
return 0;
}

