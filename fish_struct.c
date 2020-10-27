#include <stdio.h>
#include <stdlib.h>

void catalog(const char *name, const char *species, int teeth, int age)
{
  printf("%s is a %s with %i teeth. He is %i.\n",
  name, species, teeth, age);
}

void label(const char *name, const char *species, int teeth, int age)
{
  printf("Name: %s\nSpecies: %s\n%i years old, %i teeth\n",
  name, species, age, teeth);
}

int main()
{
  catalog("Snappy", "Piranha", 69, 4);
  label("Snappy", "Piranha", 69, 4);
  return 0;
}

struct fish {
  const char *name;
  const char *species;
  int teeth;
  int age;
};

struct fish {
  const char *name;
  const char *species;
  int teeth;
  int age;
};

struct fish snappy = {"Snappy", "Piranha", 69, 4};

void catalog(struct fish f)
{
  printf("%s is a %s with %i teeth. He is %i.\n",
  snappy.name, snappy.species, snappy.teeth, snappy.age);
}

void label(struct fish f)
{
  printf("Name: %s\nSpecies: %s\n%i years old, %i teeth\n",
  snappy.name, snappy.species, snappy.age, snappy.teeth);
}

struct preferences {
  const char *food;
  float exercise_hours;
};

struct fish {
  const char *name;
  const char *species;
  int teeth;
  int age;
  struct preferences care;
};

struct fish snappy = {"Snappy", "Piranha", 69, 4, {"meat", 7.5}};

int main()
{
  // catalog(snappy);
  // label(snappy);
  printf("Name = %s\n", snappy.name);
  printf("Snappy likes to eat %s\n", snappy.care.food);
  printf("Snappy likes to exercise for %f hours\n", snappy.care.exercise_hours);
  return 0;
}
