#include<stdio.h>
int main(){
int v[100],b=0,n,i,nc=0,nd=0,nco=0,g=1,f=1,m=1;
while(b==0){
		printf("Dimensiune sir=");
		scanf("%d\n",&n);
		if(n>0 && n<=100)
			{b=1;}
			else
			{b=0;}
		}
for(i=0;i<n;i++){
		scanf("%d",&v[i]);}
printf("\nSirul  este:\n");
	for(i=0;i<n;i++){
		printf(" %d",v[i]);}
i=0;
while(i<n){
if(v[i]<v[i+1]){nc++;}
	else break;
i++;
}
i=0;
while(i<n){
if(v[i]>v[i+1]){nd++;}
	else break;
i++;
}
i=0;
while(i<n){
if(v[i]==v[i+1]){nco++;}
	else break;
i++;
}		
if(nc==n){printf("\n crescator\n");}
	else{ g=0;}
		 
if(nd==n){printf("\n descrescator\n");}
	else {m=0;}
		 
if(nco==n-1){printf("\n constant\n");}
	else {f=0;}

if(g==0&&f==0&&m==0)printf("\n neordonat\n");

return 0;
}
