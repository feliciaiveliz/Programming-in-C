#include <stdio.h>
#include <stdlib.h>

// Using 'struct' to create new data type

struct cat {
    const char *name;
    const char *nickname;
    int age;
    const char *favorite_activity;
};

int main() {
  struct cat anakin = {"Anakin","Ani or Booboo", 14, 
  "lay on my favorite human Felicia's lap while she watches The Great British Baking Show :)"};
  struct cat steve = {"Steve", "Stevie Lynn", 1, "playing with my bacon and egg toys and harrassing the other cats (mostly old man Booboo), especially while they eat ;)"};

  printf("Hi, I'm %s! But you can just call me %s. I'm %i years old, which makes me the oldest of the bunch, and the wisest!\n"
  "My favorite thing to do is %s\n", anakin.name, anakin.nickname, anakin.age, anakin.favorite_activity);

  printf("\n");

  printf("Howdy friends! I'm %s, or %s for short. This year I'll turn %i, so I'm the baby of the gang.\n"
  "The most fun things to do 'round these parts is %s\n", steve.name, steve.nickname, steve.age, steve.favorite_activity);

  return 0;
}

// Using 'typedef' to eliminate writing 'struct' many times

typedef struct {
    const char *name;
    const char *nickname;
    int age;
    const char *favorite_activity;
} cat;

int main() {
  cat anakin = {"Anakin","Ani or Booboo", 14, 
  "lay on my favorite human Felicia's lap while she watches The Great British Baking Show :)"};
  cat steve = {"Steve", "Stevie Lynn", 1, "playing with my bacon and egg toys and harrassing the other cats (mostly old man Booboo), especially while they eat ;)"};

  printf("Hi, I'm %s! But you can just call me %s. I'm %i years old, which makes me the oldest of the bunch, and the wisest!\n"
  "My favorite thing to do is %s\n", anakin.name, anakin.nickname, anakin.age, anakin.favorite_activity);

  printf("\n");

  printf("Howdy friends! I'm %s, or %s for short. This year I'll turn %i, so I'm the baby of the gang.\n"
  "The most fun things to do 'round these parts is %s\n", steve.name, steve.nickname, steve.age, steve.favorite_activity);

  return 0;
}

// Nesting Structs and added cat information

typedef struct
{
    const char *fur;
    const char *eyes;
    const char *personality;
} pet; 

typedef struct 
{
    const char *name;
    const char *nickname;
    int age;
    const char *favorite_activity;
    pet info;
} cat;

int main() 
{
  cat anakin = {"Anakin","Ani or Booboo", 14, "laying on my favorite human Felicia's lap while she watches The Great British Baking Show :)", 
  {"Brown with stripes", "Green", "Sweet"}};
  cat steve = {"Steve", "Stevie Lynn", 1, "playing with my bacon and egg toys and harrassing the other cats (mostly old man Booboo),\nespecially while they eat ;)", {"White with gray patch on head", "Blue", "Devilish"}};

  // Anakin
  printf("Name: %s\nFur color: %s\nEye color: %s\nPersonality: %s\n", anakin.name, anakin.info.fur, anakin.info.eyes, anakin.info.personality);
  printf("\nHi, I'm %s! But you can just call me %s. I'm %i years old, which makes me the oldest and wisest of the bunch!\n"
  "I love %s\n", anakin.name, anakin.nickname, anakin.age, anakin.favorite_activity);

  printf("\n");
  printf("----------------------------------------\n");
  printf("\n");

  // Steve
  printf("Name: %s\nFur color: %s\nEye color: %s\nPersonality: %s\n", steve.name, steve.info.fur, steve.info.eyes, steve.info.personality);
  printf("\nHowdy friends! I'm %s, or %s for short. This year I'll turn %i, so I'm the baby of this gang.\n"
  "The most fun things to do 'round these parts is %s\n", steve.name, steve.nickname, steve.age, steve.favorite_activity);

  return 0;
}

