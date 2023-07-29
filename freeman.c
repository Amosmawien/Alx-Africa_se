#include <stdio.h>
#include <string.h>

// create struct of person1 person2 variables
struct Persons {
  char name[50];
  int citNo;
  float salary;
  
} person1, person2;

int main() {

  // assign value to name of person1 and person2
  strcpy(person1.name, "George Orwell");
  
  strcpy(person2.name,  "Amos Mawien");

  // assign values to other person1 person2 variables
  person1.citNo = 1984;
  person1. salary = 2500;
  
  
  person2.citNo = 1997;
  person2. salary = 4800;
  
  // print struct variables
  printf("Name: %s\n", person1.name);
  printf("Citizenship No.: %d\n", person1.citNo, person2.citNo);
  printf("Salary: %.2f", person1.salary,  person2.salary);
  
  printf("Name: %s\n", person2.name);
  printf("Citizenship No.: %d\n", person2.citNo);
  printf("Salary: %.2f", person2.salary);

  return 0;
}
