/*
  Program:            squeeze
  Description:        compress a string of characters
  References:         none
  Author:             Matt Kloc
  License:            MIT License
*/

#include <stdio.h>
#include <string.h>

int main (void)
{
  /* variables */
  const int max_size = 500;
  const int max_repeat = 8;

  char comp_str[max_size];
  char ch;

  /* counts */
  int pos = 0;
  int count = 1;

  /* title display */
  printf("\n_____SQUEEZE_____\n\n");
  
  /* receive input from the user one character at a time */
  while ((ch = getchar()) != EOF) {
    /* case pertaining to non repeating and first input characters */
    if ((pos == 0) || (comp_str[pos-1] != ch)) {
      /* when a character has been repeated but reaches a new character store its count */
      if (count > 1) {
	comp_str[pos] = count + '0';
	pos++;
	comp_str[pos] = ch;
      }
      /* just store the character because it does not need compression */
      else {
	comp_str[pos] = ch;
      }
      count = 1;
      pos++;
    }
    /* when two consecutive characters are the same, count them */
    else if (comp_str[pos-1] == ch) {
      count++;
      /* when the maximum compression count is reached */
      if (count == max_repeat) {
	comp_str[pos] = count + '0';
	/* when the character must be compressed further beyond the maximum compression count */
	if (comp_str[pos-1] == ch) {
	  pos++;
	  comp_str[pos] = ch;
	}
	count = 0;
	pos++;
      }
    }
  }
  
  /* last character repetition check */
  if (count > 1) {
    comp_str[pos] = count + '0';
  }
  
  printf("\n\n%s\n",comp_str);
  
  return 0;
  
}
