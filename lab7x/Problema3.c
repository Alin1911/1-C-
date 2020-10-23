/*Un program care va căuta şi înlocui un şir dat cu alt şir (de lungime diferită) într-un text. Vor fi înlocuite toate apariţiile şirului dat.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *strdel(char *p, int n) {
  char *aux = strdup(p + n);
  strcpy(p, aux);
  return p;
}
char *strins(char *p, char *s) {
  char *aux;
  aux = strdup(p);
  strcpy(p, s);
  strcat(p, aux);
  return p;
}
int main(){
  char text[3000], cuv1[20], cuv2[20], *p, *aux;
  printf("text:");
  gets(text);
  printf("cuvant de gasit:");
  gets(cuv1);
  printf("cuvant de pus:");
  gets(cuv2);
  p = strstr(text, cuv1);
  while(p) {
    aux=p;
    strdel(aux,strlen(cuv1));
    strins(aux,cuv2);
    aux+=strlen(cuv2);
    p= strstr(aux,cuv1);
  }
  printf("rezultat:");
  printf("%s",text);
  return 0;

}
