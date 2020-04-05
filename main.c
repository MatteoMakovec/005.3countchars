// ESERCIZIO 1:
// leggi da stdin fino a EOF e conta i caratteri: '\n', '\t' e ' ' (spazio)
// dopo EOF, scrive su stdout il numero di occorrenze di ciascuno dei tre caratteri sopra

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("\n'@' in questo esercizio è il carattere che indica l'EOF");
  printf("\n\nInserisci una frase:  ");
  int ch;
  int occurences[3] = { 0 };
  char *frase = calloc(256, sizeof(char));

  while((ch = getchar()) != '@'){
    printf("Ho letto: %c\n", ch);
    switch(ch){
      case '\n':  occurences[0]++;
                  break; 

      case '\t':  occurences[1]++;
                  break; 

      case ' ':  occurences[2]++;
                  break; 
    }
  }

  printf("\n\n");

  for(int i = 0; i < 3; i++){
    printf("occurences[%d]: %d\n", i, occurences[i]);
  }

  return 0;
}