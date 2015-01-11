/*
  Program:            xtable
  Description:        print out a table of results calculated from a 
                      mathematical equation
  References:         none
  Author:             Matt Kloc
  License:            MIT License
*/


#include <stdio.h>
#include <math.h>

int main (void)
{
  /* variables */
  const int MAX_SIZE = 9;

  /* counts */
  int x = 0;
  int y = 0;
  int i = 0;
  int j = 0;

  int answer = 0;
  int table[MAX_SIZE][MAX_SIZE];

  /* title display */
  printf("\n                             _____XTABLE_____\n\n");

  /* calculate the answers from the equation and store them in the table */
  for (i = 0; i < 9; i++) {
    x += 10;
    y = 0;
    for (j = 0; j < 9; j++) {
      y += 10;
      answer = ((pow((double)x, (double)4)) / (pow((double)y, (double)2))) + sqrt(y);
      table[i][j] = answer; 
    }
  }

  /* display the table */
  printf("  Y 10      20      30      40      50      60      70      80      90");
  printf("\n X  ----------------------------------------------------------------------\n");

  y = 0;
  for (i = 0; i < 9; i++) {
    y += 10;
    printf(" %d ", y);
    for (j = 0; j < 9; j++) {
      /* adjust the amount of spaces printed based on the length of the answer */
      if (0 <= table[i][j] && table[i][j] <= 9) {
	printf("%d         ", table[i][j]);
      } 
      else if (10 <= table[i][j] && table[i][j] <= 99) {
	printf("%d      ", table[i][j]);
      }
      else if (100 <= table[i][j] && table[i][j] <= 999){
	printf("%d     ", table[i][j]);
      }
      else if (1000 <= table[i][j] && table[i][j] <= 9999){
	printf("%d    ", table[i][j]);
      }
      else if (10000 <= table[i][j] && table[i][j] <= 99999){
	printf("%d   ", table[i][j]);
      }
      else if (100000 <= table[i][j] && table[i][j] <= 999999){
	printf("%d  ", table[i][j]);
      }
    }
    printf("\n    ----------------------------------------------------------------------\n");
  }

  printf("\n Equation: x^4 / y^2 + sqrt(y)\n\n");

  return 0;

}
