#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main (){
	
	float imc, h, m, mid;
	
	h = 1.84;
	m = 122;
	imc = m/(h*h);
	mid = 24.9*(h*h);
	mid = m-mid;
	
	printf ("\nO IMC de Brutos eh: %.2f. E ele deve perder aproximadamente, no minimo, %.2fkg para atingir o IMC ideal\n", imc, mid);
	
	h = 1.76;
	m = 45;
	imc = m/(h*h);
	mid = 18.5*(h*h);
	mid = mid-m;
	
	printf ("\nO IMC de Olivia eh: %.2f. E ela deve ganhar aproximadamente, no minimo, %.2fkg para atingir o IMC ideal\n", imc, mid);
	
}
