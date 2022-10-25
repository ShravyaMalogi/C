#include<stdio.h>
#include<conio.h>

void printNamaste();
void printBonjour();

int main()
{
  char user;
  printf("What is your nationality? \nEnter f for French (or) i for Indian \n");
  scanf("%c", &user);
  
  if (user=='i') {
  	printNamaste();
  }
  else if (user=='f') {
  	printBonjour();
  }
  else {
  	printf("idk your language man");
  }

return 0;
}

void printNamaste() {
	printf("Namaste");
}

void printBonjour() {
	printf("Bonjour");
}
