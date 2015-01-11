/*
  Program:            blanks
  Description:        replace sequences of blanks with just one and print
                      the largest number of consecutive blanks
  References:         none
  Author:             Matt Kloc
  License:            MIT License
*/

#include <stdio.h>
#include <string.h>

int main (void)
{
  /* variables */
  const int max_out = 500;

  char out_str[max_out];
  char ch;

  /* counts */
  int pos = 0;
  int spaces = 0;
  int max_spaces = 0;

  /* title display */
  printf("\n_____BLANKS_____\n\n");

  /* receive input from the user one character at a time */
  while ((ch = getchar()) != EOF) {
    /* keep track of non whitespace characters, by counting and storing them */
    if (ch != ' ') {
      out_str[pos] = ch;
      pos++;
      spaces = 0;
    }
    /* when a space character is first reached */
    else if (ch == ' ' && out_str[pos-1] != ' ') {
      out_str[pos] = ch;
      pos++;
      spaces++;
    }
    /* keep track of the consecutive spaces */
    else {
      spaces++;
    }
    /* keep track of the largest count of consecutive spaces */
    if (spaces > max_spaces) {
      max_spaces = spaces;
    }
  }

  printf("\n\n%s\n",out_str);
  printf("\nThe maximum number of consecutive spaces is %d\n\n",max_spaces);

  return 0;
  
}
