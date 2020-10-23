//scrieţi o funcţie care extrage un subşir de lungime dată dintr-o poziţie dată a unui şir.
#include<stdio.h>
#include<string.h>
#include<math.h>
char *substr(char *src, int n, char *dest){
  strncpy(dest,src,n);
  dest[n]='\0';
  return dest;
}
int main(){
  char src[100], dest[100];
  int p, c;
  printf("sir=");
  scanf("%s",src);
  printf("pozitie=");
  scanf("%d",&p);
  printf("cate caractere=");
  scanf("%d",&c);
  printf("%s\n",substr(src+p,c,dest));
}
