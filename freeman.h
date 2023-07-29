#include <stdio.h>

struct myStructure {
	int myNum;
	chart myLetter;
	
};

int main() {
	
	struct myStructure s1;
	struct myStructure s2;
	
	s1.myNum = 28;
	s2.myLetter = 'M';
	
	printf("s1 number: %d\n", s1.myNum);
	printf("s1 letter: %c\n", s1.myLetter);
	
	printf("s2 number: %d\n", s2.myNum);
	printf("s2 letter: %c\n", s2.Letter);
	
	return 0;
}
