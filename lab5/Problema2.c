#include<stdio.h>
int cifra(long int n, int c){
  int i, o,z=0,r=0;
  while(n){
    o=n%10;
    r++;
    if(o==c){
      printf("DA\n");
      break;}
    else{
      n=n/10;
      z++;}
  }
  if(z==r){printf("NU\n");}
}
int main(){
  long int n;
  int c;
  scanf("%ld\n%d\n",&n ,&c);

  cifra( n, c);
  return 0;
}
