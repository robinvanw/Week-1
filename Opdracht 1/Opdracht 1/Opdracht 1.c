#include <stdio.h>

int main(void)
{
	int a,b;
	
	printf("Calculator product\n\nUw eerste getal : ");
	scanf("%d", &a);
	printf("Uw tweede getal : ");
	scanf("%d", &b);
	printf("\nUw antwoord :\t%d", a*b);
	getchar();
	getchar();
}