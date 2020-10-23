#include<stdio.h>
int main(){
	int i,v[100],n,b=0,poz=0,neg=0;
	while(b==0){
		printf("Numarul de elemente n=");
		scanf("%d",&n);
		if(n>0 && n<=100){
			b=1;}
			else
			{b=0;}
		}	
	printf("Elementele sirului:");
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);
		}
	for(i=0;i<n;i++){
		if(v[i]<0){
			neg++;}
			else
			{poz++;
			}
		}	
	printf("Pozitive= %d\nNegative= %d\n",poz,neg); 
	return 0;
}

