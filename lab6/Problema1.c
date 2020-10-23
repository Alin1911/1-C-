#include<stdio.h>
#include<math.h>
void  bubbleSort(int *v, int n){
  int gata=0, i, aux;
  while (!gata){
    gata=1;
    for (i=0; i<n-1; i++){
      if (v[i] > v[i+1]) {
        gata = 0;
        aux=v[i];
        v[i]=v[i+1];
        v[i+1]=aux;
      }
    }
  }
}
int main(){
  int v[100],n,i,b=0;
  while(b==0){
    	printf("n=");
    	scanf("%d",&n);
    	if(n>0 && n<=10000)
    		{b=1;}
    		else
    		{b=0;}
    		}
  printf("Intrduceti vectorul v=\n");
  for(i=0;i<n;i++){
    scanf("%d",&v[i]);
  }
  printf("\n");
  bubbleSort(v,n);
  for(i=0;i<n;i++){
    printf(" %d",v[i]);
  }
  printf("\n");
}
