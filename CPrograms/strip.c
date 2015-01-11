/*
  Program:            strip
  Description:        remove all the comments from a c program
  References:         none
  Author:             Matt Kloc
  License:            MIT License
*/

#include <stdio.h>

int main (void)
{
  /* variables */
  const int max = 5000;

  char strip_str[max];
  char ch;

  /* counts */
  int pos = 0;
  
  /* switches */
  int remove = 0;
  int quote = 0;

  /* title display */
  printf("\n_____STRIP_____\n\n");

  /* receive input from the user one character at a time */
  while ((ch = getchar()) != EOF) {
    /* when not removing store all characters read into strip_str array */
    if (remove == 0) {
      strip_str[pos] = ch;
      pos++;

      /* when the end of a quoted string is reached */
      if (quote == 1 && (ch == '\'' || ch == '"') && strip_str[pos-2] != '\\') {
	quote = 0;
      }
      /* when the beginning of a quoted string is reached */
      else if (ch == '\'' || ch == '"') {
	quote = 1;
      }
    }
    
    /* when performing a removal of a comment */
    else if (remove == 1) {
      if (ch == '*') {
	strip_str[pos] = ch;
      }
      else if (ch == '/' && strip_str[pos] == '*') {
	strip_str[pos] = 0;
	remove = 0;
      }	  
    }


    /* check previosly stored char and new ch to see if they are comment openers */
    if (quote == 0) {
      if (strip_str[pos-2] == '/' && strip_str[pos-1] == '*') {
	strip_str[pos-1] = 0;
	strip_str[pos-2] = 0;
	
	pos = pos-2;
	remove = 1;
      }
    }
  }
    
  printf("%s", strip_str);

  return 0;
  
}
