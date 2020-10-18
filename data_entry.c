#include <stdio.h>
#include <stdlib.h>

int main()
{
  char name[40];
  int age; 
  printf("Enter your name: ");
  scanf("%39s", name);
  printf("Enter your age: ");
  scanf("%i", &age);
  printf("Your name is %s and you are %i years old!\n", name, age);

// or

  char first_name[10];
  char last_name[10];
  printf("Enter your first and last name: ");
  scanf("%39s %39s", first_name, last_name);
  printf("First name: %s\nLast name: %s\n", first_name, last_name);
}


// Functions that want to update the value of a variable don't want the value itself, they want the address.