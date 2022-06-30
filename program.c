#include <stdio.h>

int fakulteta(int i);
int fakultetaRekurzija(int n);
int vrniStevilo(int i);


int main() {
	int stevilo;
	printf("Napisi stevilo: ");
	scanf("%d", &stevilo);
	
	int fak = fakulteta(stevilo);	//spremenljivka za fakulteto stevila 
	int fakRek; // spremenljivka za rekurzivno fakulteto
	printf("tvoje stevilo je %d\n", vrniStevilo(stevilo));
	printf("fakulteta tvojega stevila je %d\n", fak);
	printf("Fakulteta v rekurzivni obliki, bi mogla vrnt isto: %d\n", fakRek);
	//printf("%d", fakulteta(5));
	return 0;
}

int fakulteta(int j)
{
	int rez = 1;
	for (int i = j; i > 0; i--)
	{
		rez *= i;
	}
	return rez;
}

int fakultetaRekurzija(int n) {
	if (n == 1) {
		return 1;
	}
	
	return n * fakultetaRekurzija(n - 1);
}

int vrniStevilo(int i) {
	
	return i;
}