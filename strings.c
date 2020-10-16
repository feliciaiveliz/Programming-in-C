#include <stdio.h>
#include <stdlib.h>

int main()
{
  void fortune_cookie(char msg[])
{
  printf("Message reads: %s\n", msg);
}

char quote[] = "Life is short, eat the cookie.";
fortune_cookie(quote);
}