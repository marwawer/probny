#include <stdio.h>

int mnoz (int a, int b) {return a * b; }
int dodaj (int a, int b) {return a + b; }

int main(void)
{
	int a = 2, b = 5; /*deklaracja wraz z inicjalizacja*/ /* if (wyrazenie) {blok jest wyrazenie prawdziwe} else {blok jest wyrazenie falszywe}*/
	char wybor = '+';
	if(wybor == '*') {
		printf("Wynik mnozenia: %i\n", mnoz(a,b));
	}else{
		printf("Wynik dodawania: %i\n", dodaj(a,b));

	}; /*ten srednik jest opcjonalny jezeli wystepuje klamra*/
	return 0;
}
