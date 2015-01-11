/*
  Program:            revline
  Description:        reverse one line of input at a time
  References:         none
  Author:             Matt Kloc
  License:            MIT License
*/

#include <stdio.h>
#include <string.h>

/* prototypes */
void reverse(char s[]);

int main (void)
{
  /* variables */
  const int maxlen = 80;
  char s[maxlen];

  /* title display */
  printf("\n_____REVLINE_____\n\n");

  /* receive input from the user one line at a time until ctrl d */
  while (fgets(s, maxlen, stdin)) {
    reverse(s);
    printf("%s\n\n", s);
  }

  return 0;

}

/* function to reverse the characters in a line */
void reverse(char s[]) {

  int length = strlen(s);
  int c;
  int b = length - 1;

  char temp;

  /* perform a swap for each character in the line */
  for (c = 0; c < length && c <= b; c++) {
    temp = s[b];
    s[b] = s[c];
    s[c] = temp;
    
    b--;
  }
  return;
}

