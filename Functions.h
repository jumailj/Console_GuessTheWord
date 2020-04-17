#pragma once
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string.h>
#include <vector>

#define log(x) std::cout <<x <<std::endl; //  prining on console;
#define RANDOM srand(time(nullptr)); // random number change relative to time;

void Welcome();
int randomNumberGenerator(int min, int max);
int CheckingForNumberOfWords(int* totalWords,  int* NumbeNumberOfQuestionsrOfWords);
