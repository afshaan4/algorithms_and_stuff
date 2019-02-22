// draws triangles with text
#include<iostream>

int main() {
	char*ptr,str[] = "MEME REVIEW";
	ptr=str;

	// for every char in the string
	for (int i = 0; str[i] != '\0'; i++) {
		// print out the string starting at position: ptr + i
		std::cout << (ptr+i) << std::endl;
	}

	return 0;
}
