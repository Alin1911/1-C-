#include<stdio.h>
int main(){
int v[100],poz=0,poz1=1,b=0,n,p,i,max=1,j,nr=1;
while(b==0){
		printf("Dimensiunea V1=");
		scanf("%d\n",&n);
		if(n>0 && n<=100)
			{b=1;}
			else
			{b=0;}
		}
for(i=0;i<n;i++){
		scanf("%d",&v[i]);}
printf("\nVectorul V1 este:\n");
	for(i=0;i<n;i++){
		printf(" %d",v[i]);}
	printf("\n");

return 0;
}
