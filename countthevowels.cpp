#include <iostream>
#include <cstring>
#include <ctype.h>

char input[30];
char vowels[] = "aeiou";

int main() {
	//used for iteration
	int i, j;
	int counter = 0;

	std::cin >> input;
	std::cout << strlen(input) << " " << input << std::endl;

	//this iterates throught the string and counts vowels
	for( i = 0; i < strlen(input); i++ ) {
		for( j = 0; j < strlen(vowels); j++ ) {
			if(input[i] == vowels[j]) {
				counter++;
				std::cout << counter << std::endl;
			}
		}		
	}

	std::cout << "vowels found: " << counter << std::endl;
	return 0;
}
