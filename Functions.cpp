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

int CheckingForNumberOfWords(int *totalWords,  int * NumberOfQuestions) {

	if ((*totalWords) >= (*NumberOfQuestions)) {
		//log("[INFO] Word Array redy");
		return 1;
	}
	else {
		log("[INFO] Add " << *NumberOfQuestions - *totalWords << " More Words To Start.");
		return 0;
	}

}



