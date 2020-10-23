#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
/
  FILE *tabela = fopen (argv[1], "r");
  FILE *fin = fopen (argv[2], "r");
  FILE *fout = fopen (argv[3], "w");
  int i, n;

  char tabel[128] = {0}, c1, c2;

  while (!feof(tabela)) {
    fscanf(tabela, "%c %c\n", &c1, &c2);
    tabel[c1] = c2;
  }
  fclose(tabela);

  while (!feof (fin)) {
    fscanf(fin, "%c", &c1);


    if (((65 <= c1) && (90 >= c1)) || ((97 <= c1) && (122 >= c1))) {
      if (tabel[c1 + 32 * (c1 < 97)]) {
        c1 = tabel[c1 + 32* (c1 < 97)] - 32 * (c1 < 97);
      }
    }
    fprintf(fout, "%c", c1);
  }
  
  fclose(fin);
  fclose(fout);
  
  return 0;
}
