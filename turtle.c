#include <stdio.h>
#include <stdlib.h>

typedef struct {      // data structure to contain information about Myrtle
  const char *name;
  const char *species;
  int age;
} turtle;

void happy_birthday(turtle t)      // A function to tell Myrtle happy birthday and how old she is now
{
  t.age = t.age + 1;
  printf("Happy Birthday %s! You are now %i years old!\n",
    t.name, t.age);
}

int main()     // Print a statement to show Myrtle's current age
{
  turtle myrtle = {"Myrtle", "Leatherback sea turtle", 99};
  happy_birthday(myrtle);
  printf("%s's age is now %i years old.\n", myrtle.name, myrtle.age);
  return 0;
}