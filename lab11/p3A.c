#include <stdio.h>
#include <string.h>

#define BUFMAX 100

int main (int argc, char *argv[] ) {
  
  FILE *src;
  char buffer[BUFMAX];
  
  src = fopen(argv[1], "r");

  if (!src) {
    fprintf(stderr,"Eroare! Nu am putut deschide fiserul sursa!\n");
  }
  else {
   
    while (fgets(buffer, BUFMAX, src)) {
      if (strstr(buffer, argv[2])) {
        printf("%s", buffer) ;
      }
    }
  
    fclose(src);
  }
  
  return 0;
}
