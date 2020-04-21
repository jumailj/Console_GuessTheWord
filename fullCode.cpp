#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string.h>
#include <vector>

#define log(x) std::cout <<x <<std::endl; //  on console;
#define RANDOM srand(time(nullptr)); // random number change relative to time;

void Welcome();
int randomNumberGenerator(int min, int max);

void Welcome() {
	log("---SHUFFLE GAME---");
}

	if (totalWords < NumberOfQuestions) {
		log("need to add more words");
		return 0;
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



int NumberOfQuestions =5;
const int WorldLenght = 10;
char Words[][WorldLenght]{ "keyboard","processor","mouse","memory","monitor","cpu","program","software"};

char Word[WorldLenght]{};
int NumberOfLettersInWord = 0;
int trackNumber;

int totalWords =  sizeof(Words) / WorldLenght;
std::vector <unsigned int> WordTracker(totalWords);

char userInput[WorldLenght]{};

int main() {
	RANDOM 
	Welcome();

	if (!CheckingForNumberOfWords(&totalWords, &NumberOfQuestions)) { 
		return 0;
	}

	for(int i = 0; i< NumberOfQuestions; i++) {
   
	to:
		std::cout << "";
	int number = (randomNumberGenerator(0,totalWords));
	if (WordTracker[number] == 1) {
		goto to;
	}
	WordTracker[number] = 1;
	/*........*/

	// find the how much letters in a word;
	for (int i = 0; Words[number][i] != '\0'; i++) {
		//log(Words[number][i]);
		NumberOfLettersInWord++;
	}

	std::vector <int> LetterTracker(NumberOfLettersInWord);

	memset(Word, '\0', sizeof(Word));

	for (int i = 0; i <= NumberOfLettersInWord-1; i++) {
		st:
		int RandomNumber = randomNumberGenerator(0, NumberOfLettersInWord);

		if (LetterTracker[RandomNumber] == 1) {
			goto st;
		}

		Word[i] = Words[number][RandomNumber];

		LetterTracker[RandomNumber] = 1;
	}

	log(i + 1 << "]" << Word);  // log(Words[number]);

	std::cout << "Ans:";
	std::cin >> userInput;

	trackNumber = -1;

	for (int i = 0; i <= NumberOfLettersInWord; i++) {
		if (userInput[i] == Words[number][i]) {
			trackNumber++;
		} 
	 }

	if (trackNumber == NumberOfLettersInWord) {
		log("your answer was correct") 
	}
	else {
		log("your answer was wrong");
	
	}

	std::cout << std::endl;


	NumberOfLettersInWord = 0;
	memset(userInput, '\0', sizeof(userInput));

	}
	return 0;
}
