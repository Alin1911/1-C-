#include<stdio.h>
#include<math.h>
int prim(int n){
  int prim,i;
  for(i=2;i<=sqrt(n);i++){
    if(n%i==0){
      return 0;
    }
  }
  return 1;

}

int main(){
  int N,b=0,i;
  printf("N= ");
  while(b==0){
    scanf("%d",&N);
    if(N>=2 && N<=200000){
      b=1;
    }else{b=0;}
  }
  for(i=1;i<=N/2;i=i+1){
    if(prim(i) && prim(N-i)){
          printf("%d=%d+%d\n",N,i,N-i);
      }
  
    }  return 0;
}

