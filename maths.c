#include <stdio.h>

int main() {

	int a, b;
	printf("Enter two values\n");
	scanf("%i %i", &a, &b);
	printf("%i + %i = %i\n", a, b, a+b);
	printf("%i - %i = %i\n", a, b, a-b);
	printf("%i * %i = %i\n", a, b, a*b);
	printf("%i / %i = %i\n", a, b, a/b);
	
	return 0;
	
	}
