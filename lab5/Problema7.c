#include<stdio.h>
int transforma(int n){
  int v[10]={0}, i, b=0, j;
  while(n){
    if(n%10==0){
        b=1;}
    v[n%10]++;
    n=n/10;}
  if(b==0){
    for(i=0;i<=9;i++){
      if(v[i]){
        for(j=1;j<=v[i];j++){
          n=n*10+i;
        }
      }
    }
  }
  else{
    for(i=9;i>=0;i--){
      if(v[i]){
        for(j=1;j<=v[i];j++){
          n=n*10+i;
        }
      }
    }
  }
  return n;
}
int main(){
  int n ,b=0;
  while(b==0){
  	printf("n=");
  	scanf("%d",&n);
  	if(n>0 && n<=1000000000)
  		{b=1;}
  		else
  		{b=0;}
  		}
  printf("%d\n",transforma(n));
  return 0;
}
