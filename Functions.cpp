#include "Functions.h"

void Welcome() {
	log("---SHUFFLE GAME---");
}

int randomNumberGenerator(int min, int max) {
	min--;
go:
	int number = (rand() % max );

	if (number < min) {
		goto go;
	}
	return number;
}



