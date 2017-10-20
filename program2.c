#include <stdio.h>

int mnoz (int a, int b) {
	return a*b;
}

int main(void)

{
	int wynik; /*deklaracjia zmiannej typu typu calkowitego*/

	wynik = mnoz(4,5); /**/

	printf("Wynik mnozenia: %i\n", mnoz(4,5));
	return 0;
}
