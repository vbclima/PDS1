#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main (){
	float mont, rend = 1.0056;
	
	mont = 789.54;
	mont = mont*rend;
	
	printf ("Saldo inicio segundo mes: %.2f\n\n", mont);
	
	mont = mont+303.20;
	mont = mont*rend;
	
	printf ("Saldo inicio terceiro mes: %.2f\n\n", mont);
	
	mont = mont-58.25;
	mont = mont*rend;
	
	printf ("Saldo inicio quarto mes: %.2f", mont);
}
