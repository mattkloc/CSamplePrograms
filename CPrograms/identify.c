/*
  Program:            identify
  Description:        determine whether an identifier name entered is valid 
                      or not
  References:         none
  Author:             Matt Kloc
  License:            MIT License
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
  /* variables */
  const int IDLEN = 80;
  char name[IDLEN];
  int result = 1;
  int i = 0;

  /* title display */
  printf("\n_____IDENTIFY_____\n\n");

  /* receive identifier name from user input */
  scanf("%s",name);

  /* check potential identifier against C keywords */
  if (strcmp(name,"auto") == 0 || strcmp(name,"break") == 0 || strcmp(name,"case") == 0 
      || strcmp(name,"char") == 0 || strcmp(name,"continue") == 0 || strcmp(name,"do") == 0 
      || strcmp(name,"default") == 0 || strcmp(name,"const") == 0 || strcmp(name,"double") == 0 
      || strcmp(name,"else") == 0 || strcmp(name,"enum") == 0 || strcmp(name,"extern") == 0 
      || strcmp(name,"for") == 0 || strcmp(name,"if") == 0 || strcmp(name,"goto") == 0 
      || strcmp(name,"float") == 0 || strcmp(name,"int") == 0 || strcmp(name,"long") == 0 
      || strcmp(name,"register") == 0 || strcmp(name,"return") == 0 || strcmp(name,"signed") == 0 
      || strcmp(name,"static") == 0 || strcmp(name,"sizeof") == 0 || strcmp(name,"short") == 0 
      || strcmp(name,"struct") == 0 || strcmp(name,"switch") == 0 || strcmp(name,"typedef") == 0 
      || strcmp(name,"union") == 0 || strcmp(name,"void") == 0 || strcmp(name,"while") == 0 
      || strcmp(name,"volatile") == 0 || strcmp(name,"unsigned") == 0) {
    
    printf("\n\"%s\" is a keyword in C therfore it cannot be an identifier\n\n", name);
    printf("Identifier Name:     Invalid\n\n");

    /* switch result to 0 for invalid */
    result = 0;

  }

  /* check string character by character for legal identifier characters */
  for (i = 0; i < strlen(name); i++) {

    if (isalpha(name[i])) {}
    else if (isdigit(name[i])) {}
    else if (name[i] == '_') {}
    else {
      printf("\nIdentifier Name:     Invalid\n\n");
      break;
    }
    if (i == (strlen(name)-1) && result != 0) {
      printf("\nIdentifier Name:     Valid\n\n");
    }
  }

  
  return 0;

}
