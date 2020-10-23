#include <stdio.h>
int main()
{int n, m, i, j=0, k=0;
scanf("%d%d" ,&n,&m);
for(i=1;i<n;i++){
	j=j+1;
	printf(" %d ",i);
	if(j==m){
		j=0;
		printf("\n");
		k=k+1;
		}
	if(k==24){
		getchar();
		getchar();
		k=0;
		}
	}

}
