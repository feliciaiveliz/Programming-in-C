#include <stdio.h>
#include <stdlib.h>

// struct bird {
//    const char *type;
//    const char *name;
//    const char *sound;
//    double weight;
// };

// struct bird bubbles = {"Crow", "Bubbles", "caw", 1.1};
// struct bird winter = {"Snowy Owl", "Winter", "hoo", 4.5};

// void details(struct bird b)
// {
//   printf("Name: %s\nType: %s\nSound: %s\n\n", b.name, b.type, b.sound);
// }

// int main()
// {
//   details(bubbles);
//   details(winter);
//   return 0;
// }

// typedef struct { 
//   const char *food;
//   const char *personality;
// } animal;

// typedef struct {
//   const char *name;
//   const char *type;
// } bird;

// int main()
// {
//   bird winter = {"Winter", "Snowy Owl"};
//   printf("Name: %s\nType: %s\n", winter.name, winter.type);
//   return 0;
// }

// // bird bubbles = {"Crow", "Bubbles", "caw", 1.1, {"seeds", "playful"}};
// bird winter = {"Snowy Owl", "Winter", "hoo", 4.5, {"mice", "solitary"}};

// int main() {
//   printf("Greetings! I'm %s, the %s. I %s to mark my territory.\n", winter.name, winter.type, winter.sound);
// }

// void details(const char *name, const char *type, char *sound)
// {
//   printf("I'm %s the %s. I love to %s at people all day long.\n", name, type, sound);
//   printf("Name:%s\nType:%s\nSound:%s\n", name, type, sound);

// }

// int main()
// {
//   printf("Name: %s\nFood: %s\nPersonality: %s\n\n", bubbles.name, bubbles.info.food, bubbles.info.personality);
//   printf("Name: %s\nFood: %s\nPersonality: %s\n", winter.name, winter.info.food, winter.info.personality);
//   return 0;
// }


// typedef struct {
//  const char *name;
//  int age;
// } bird;

// void happy_birthday(bird *b)
// {
//  b->age = b->age + 1;
//  printf("Happy Birthday %s! You are now %i years old!\n",
//  b->name, b->age);
// }
// int main()
// {
//  bird bubbles = {"Bubbles", 2};
//  happy_birthday(&bubbles);
//  printf("%s's age is now %i.\n", bubbles.name, bubbles.age);
//  return 0;
// }

// typedef struct { 
//   const char *food;
//   const char *personality;
// } animal;

// typedef struct {
//   const char *name;
//   animal info;
// } bird;

// int main()
// {
//   bird winter = {"Winter", {"mice", "solitary"}};
//   printf("Name: %s\nFood: %s\nPersonality: %s\n", winter.name, winter.food, winter.personality);
// }

// int main()
// {
//   printf("Name: %s\nFood: %s\nPersonality: %s\n\n", bubbles.name, bubbles.info.food, bubbles.info.personality);
//   printf("Name: %s\nFood: %s\nPersonality: %s\n", winter.name, winter.info.food, winter.info.personality);
//   return 0;
// }

// typedef struct {
//  const char *name;
//  const char *type;
// } bird; ;

// int main()
// {
 
//  printf("Name: %s\nType: %s\n", winter.name, winter.type);
//  return 0;
// }


typedef struct { 
  const char *food;
  const char *personality;
} animal;

typedef struct {
  const char *name;
  animal info;
} bird;

int main()
{
  bird winter = {"Winter", {"mice", "solitary"}};
  printf("Name: %s\nFood: %s\nPersonality: %s\n", winter.name, winter.info.food, winter.info.personality);
}