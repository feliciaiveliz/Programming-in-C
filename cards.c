/*
 * Program to evaluate face values.
 * Released under the Vegas Public License.
 * (c)2014 The College Blackjack Team.
 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char card_name[3]; /* Initializing an array 'card_name' to only have 3 elements (last element is \o) */
    puts("Enter the card_name: "); /* displays this string */
    scanf("%2s", card_name); /* ? */
    int val = 0; /* initializing an integer variable 'val' to 0 */
    if (card_name[0] == 'K') { /* start of 'if' statement. if the first element is equal to 'K'... then enter blocks statement */
        val = 10;
    } else if (card_name[0] == 'Q') {
        val = 10;
    } else if (card_name[0] == 'J') {
        val = 10;
    } else if (card_name[0] == 'A') {
        val = 11;
    } else {
        val = atoi(card_name);
    }

    if ((val > 2) && (val < 7))
        puts("Count has gone up!");
    else if (val == 10)
        puts("Count has gone down!");
    return 0; /* the program should return 0 if it was successful */
}