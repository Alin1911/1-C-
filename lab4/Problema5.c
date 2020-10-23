#include<stdio.h>
int main(){
	int i,v1[100],v2[100],q[200],n1,n2,k,c=0,b=0,schimb,j;
	while(b==0){
		printf("Dimensiunea V1=");
		scanf("%d\n",&n1);
		if(n1>0 && n1<=100)
			{b=1;}
			else
			{b=0;}
		}
	for(i=0;i<n1;i++){
		scanf("%d",&v1[i]);}
 	while(c==0){
		printf("\nDimensiunea V2=");
		scanf("%d\n",&n2);
		if(n2>0 && n2<=100)
			{c=1;}
			else
			{c=0;}
		}
	k=n1+n2;
	for(i=0;i<n2;i++){
			scanf("%d",&v2[i]);}
	printf("\nVectorul V1 este:\n");
	for(i=0;i<n1;i++){
		printf(" %d",v1[i]);}
		printf("\nVectorul V2 este:\n");
	for(i=0;i<n2;i++){
		printf(" %d",v2[i]);}
	printf("\n");
	for(i=0;i<n1;i++){
		q[i]=v1[i];}
	for(j=0;j<n2;j++){
		q[i+j]=v2[j];}
	for(i=0;i<n1+n2;i++){
		for(j=0;j<n1+n2;j++){
			if(q[i]<q[j]){
				schimb=q[i];
				q[i]=q[j];
				q[j]=schimb;
				}
			}
	}
	for(i=0;i<k;i++)
		{
   		 printf("%d ", q[i]);
 
		}
	return 0;	
}

