#include <stdio.h>

void main() {
	
	float a = 3.14159, b = 2.71828;
	float aux;
	
	aux=b;
	b=a;
	a=aux;
	
	printf("\nPI = %f", b);
	
	printf("\nEULER = %f", a);

}

