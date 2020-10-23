#include<stdio.h>
int main(){
	int i,c=0,j,a[100][100],n,m,b=0,v[100], max , min;
 	while(b==0){
		printf("nr linii=");
		scanf("%d",&n);
		if(n>0 && n<=100)
			{b=1;}
			else
			{b=0;}
		}	
 	while(c==0){
		printf("nr coloane=");
		scanf("%d",&m);
		if(m>0 && m<=100)
			{c=1;}
			else
			{c=0;}
		}	
	printf("Dati elementele matricei\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
				}
		}
	printf("Matricea este:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf(" %d",a[i][j]);
			if(j==m-1){
				printf("\n");}
				}
		 }
	for(j=0;j<m;j++){
		max=a[j][0];
		for(i=0;i<n;i++){
			 if(max<a[j][i])
                max=a[j][i];
                }
		v[j]=max;
		}
	min=v[0];
	for (i=1; i<m; i++) {
		if(v[i]<min)  
            {min=v[i];}
    }
    printf("min=%d\n",min);
			return 0;
}

