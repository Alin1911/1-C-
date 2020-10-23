#include<stdio.h>
#include<math.h>
#include <string.h>
int compara(char *sir1, char *sir2){
  int i=0,m=0,n=0;
  while(sir1[i] != '\0'){
    n++;
    i++;
  }
  i=0;
  while(sir2[i] != '\0'){
    m++;
    i++;
  }
  if(m==n){
    return 0;
  }
  if(m<n){
    return 1;
  }
  if(m>n){
    return -1;
  }

}
int main(){
  char sir1[100], sir2[100];
  int m, n, i;
  printf("sir1=");
  scanf("%s",sir1);
  printf("sir2=");
  scanf("%s",sir2);


  int b;
  b=compara(sir1,sir2);
  printf("%d\n",b);
}
