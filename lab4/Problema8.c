#include<stdio.h>
int main(){
	int v[100],b=0,n,j,i,s=0,s1=0,p,d,x;
while(b==0){
		printf("Dimensiunea V=");
		scanf("%d\n",&n);
		if(n>0 && n<=100)
			{b=1;}
			else
			{b=0;}
		}
for(i=0;i<n;i++){
		scanf("%d",&v[i]);}
printf("\nVectorul V este:\n");
	for(i=0;i<n;i++){
		printf(" %d",v[i]);}
	printf("\n");

	for(i=0;i<n;i++)
  	{	for(j=i;j<n;j++){
  		s1=s1+v[j];
  		if(s<s1){
  			s=s1;
  		 	p=i;
				x=j;
				if(i<j){d=j-i;}else{d=j-i;}
			}

  	 	}
  		s1=0;

  	}
		if(d==n-2){d=d+1;}
  	printf("\n max=%d",s);
   printf("\n poz=%d",p);
   	printf("\n dim=%d\n",d);
		for(i=p;i<=d;i++)
		{printf(" %d",v[i]);}
			printf("\n");
  return 0;
}
