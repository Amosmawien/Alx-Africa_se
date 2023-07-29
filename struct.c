#include <stdio.h>
#include <string.h>

typedef struct person{
	char name[50];
	int citNo;
	float salary;
	
} person;

int main() {
	
	person p1;
	
	strcpy(p1.name, "Amos Mawien");
	p1.citNo = 1997;
	p1. salary = 4800;
	
	printf("Name: %s\n", p1.name);
	printf("Citizenship No.: %d\n", p1 .citNO);
	printf("Salary: %.2f", p1 .salary);
	
	return 0;
} 
