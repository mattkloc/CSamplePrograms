/*
  Program:            convert
  Description:        convert n into its string base representation dictated by b
  References:         http://users.powernet.co.uk/eton/kandr2/krx305.html 
                      (snippet for itob, number to base representation algorithm)
  Author:             Matt Kloc
  License:            MIT License
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* prototypes */
void itob(int n, char s[], int b);
void reverse(char s[]);

int main (void)
{
  /* variables */
  /* represent up to 3 chars and the null terminator */
  const int max_size = 4;

  /* declare pointer for memory allocation */
  char * s;
  /* allocate a certain amount of bytes */
  s = malloc(max_size * sizeof(char));

  int n, b;

  /* title display */
  printf("\n_____CONVERT_____\n\n");

  /* receive input from the user one line at a time in pairs of two until ctrl d or EOF */
  while ((scanf("%d%d", &n, &b)) != EOF) {
    itob(n, s, b);
    printf("%s\n\n", s);
    /* clear memory pointed to by s */
    s = calloc(max_size, sizeof(char));
  }
  
  /* return memory to heap */
  free(s);	 
  
  return 0;

}


/* function to convert an int into a string holding its base representation */
void itob(int n, char s[], int b) {
  char diglet[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int count = 0;

  /* get the remainder, and keep doing so till n is less than zero from n /= b */
  do {
    s[count++] = diglet[n % b];
  } while ((n /= b) > 0);
  s[count] = 0;  
  reverse(s);

  return;
}

/* function to reverse the characters in a string */
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
