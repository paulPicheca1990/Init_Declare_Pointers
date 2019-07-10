#include <stdio.h>
#include <stdlib.h>

#define SCREEN_SIZE 78
#define DIVIDING_BAR_CHAR '='
char *get_dividing_bar() {  
  char *dividing_bar;  

  int index;
  for( index = 0, dividing_bar = (char *)malloc(sizeof(char) * SCREEN_SIZE + 1), dividing_bar[0] = DIVIDING_BAR_CHAR; 
       index < SCREEN_SIZE; 
       index++, dividing_bar[index] = DIVIDING_BAR_CHAR ) {
      /* THIS WILL ITERATE AND FILL THE STRING WITH CHARACTERS */;
  }
  dividing_bar[index] = '\0';

  return dividing_bar;
}

int main ( int argc, char **argv ){  
  char *dividing_bar = get_dividing_bar();
  int number = 2, *pnumber = NULL;

  pnumber = &number;

  printf("\n%s\n%s\n [%s]: %.8p\n%s\n [%s]: %.8p | [%s]: %.8p\n%s\n [%s]: %10d | [%s]: %10d\n%s\n", 
    "Initializing and Declaring Pointers:",
    dividing_bar,
    "Pointer Address", (void *)&pnumber,
    dividing_bar,
    "Pointer Variable Address", pnumber,
    "Actual  Variable Address", &number,
    dividing_bar,
    "Pointer Variable Value", number,
    "Acutal  Variable Value", *pnumber,
    dividing_bar);

  free(dividing_bar);
  return 0; 
}