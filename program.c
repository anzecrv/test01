#include <stdio.h>

int vrniStevilo(int i) {
	
	return i;
}

int main() {
	int stevilo;
	printf("Napisi stevilo: ");
	scanf("%d", &stevilo);
	
	int fak;	//spremenljivka za fakulteto stevila 
	
	printf("tvoje stevilo je %d\n", vrniStevilo(stevilo));
	printf("fakulteta tvojega stevila je %d\n", fak);
	
	return 0;
}