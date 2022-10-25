#include<stdio.h>
#include<conio.h>

int marks(int science, int math, int sanskrit);

int main()
{
	int science=98;
	int math=95;
	int sanskrit=99;
	
	printf("percentage is: %d", marks(science,math,sanskrit));

return 0;
}

int marks(int science, int math, int sanskrit) {
	int percentage;
	percentage=((science+math+sanskrit)/3);
	return percentage;
}
