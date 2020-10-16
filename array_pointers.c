#include <stdio.h>
#include <stdlib.h>

int main()
{
  char s[] = "How big is it?";
  char *t = s;

  printf("Size of s: %li\n", sizeof(s));
  printf("Size of t: %li\n", sizeof(t));
  printf("What is 's'?: %s\n", s);
  printf("What is 't'?: %i\n", *t);
  printf("What is '&s'?: %p\n", &s);
  printf("What is '&t'?: %p\n", &t);
}

// 't' is a pointer variable for 's' array
// 's' is just the size of the array itself in memory