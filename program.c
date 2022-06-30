#include <stdio.h>

int fakulteta(int i);

int main() {
	
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