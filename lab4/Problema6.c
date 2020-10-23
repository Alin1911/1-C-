#include<stdio.h>
int main(){
int i,j,a[100][100],n,b=0;
 while(b==0){
	printf("n=");
	scanf("%d",&n);
	if(n>0 && n<=100)
		b=1;
		else
		b=0;
		}	
 
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		scanf("%d",&a[i][j]);
			}
		}
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		printf(" %d",a[i][j]);
		if(j==n-1){
				printf("\n");}
			}
	 }
printf("Numere de sub diagonala secundara:\n");
for(i=n-1;i>=1;i--){
	for(j=n-i;j<n;j++){
		printf(" %d",a[i][j]);
			}
		}
printf("\n");
return 0;
}

