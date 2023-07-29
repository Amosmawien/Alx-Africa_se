#include <stdio.h>

struct myStructure {
	int myNum;
  char myLetter;
  
};

int main() {
	struct myStructure s2;
	
	s2.myNum = 27;
	s2.myLetter = 'A';
	
	printf("My number: %d\n", s2.myNum);
	printf("My letter: %c\n", s2.myLetter);
	
	return 0;
	
}
