/*
  Program:            longline
  Description:        echo all lines longer than sixty characters
  References:         none
  Author:             Matt Kloc
  License:            MIT License
*/

#include <stdio.h>
#include <string.h>

int main (void)
{
  /* variables */
  const int minlen = 60;
  const int maxlen = 300;

  char line[maxlen];
  char ch;
  int count = 0;

  /* title display */
  printf("\n_____LONGLINE_____\n\n");

  /* receive input from the user a character at a time */
  while ((ch = getchar()) != EOF) {
    /* keep track of non newline characters, by counting and storing them */
    if (ch != '\n') {
      line[count] = ch;
      count++;
    }
    /* when a newline character is reached */
    else if (ch == '\n') {
      /* check if the string of characters amounts to the minlen or greater */
      if (count >= minlen) {
	printf("\n%s\n\n",line);
      }
      /* reset the character array and count value */
      memset (line, 0, maxlen);
      count = 0;
    }

  }
  
  return 0;
  
}
