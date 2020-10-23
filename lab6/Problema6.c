#include<stdio.h>
#include<math.h>
 void spirala (int a[100][100], int m, int n, int *V){
   int i ,j,z=0;
   if(m==n){
    for (i=0;i<n/2+n%2;i++)
       {
         for (j=i; j<m-i; j++){V[z]=a[j][i];z++;}
         for (j=i+1;j<n-i-1;j++){V[z]=a[m-i-1][j];z++;}
         for (j=m-i-1;j>=i;j--){V[z]=a[j][n-i-1];z++;}
         for (j=n-i-2;j>i;j--){V[z]=a[i][j];z++;}
       }

     }else{
       for (i=0;i<m/2+m%2;i++)
          {
            for (j=i;j<n-i;j++){V[z]=a[j][i];z++;}
            for (j=i+1;j<m-i-1;j++){V[z]=a[n-i-1][j];z++;}
            for (j=n-i-1;j>=i;j--){V[z]=a[j][m-i-1];z++;}
            for (j=m-i-2;j>i;j--){V[z]=a[i][j];z++;}
    }
   }
}
void afisare (int V[], int dim){
  for(int i=0;i<dim;i++){
  printf(" %d",V[i]);
  }
}
int main(){
  int b, m, n, i, j, V[1000], a[100][100];
  printf("linii= ");
  scanf("%d",&n);
  printf("coloane= ");
  scanf("%d",&m);
  printf("Dati elementele matricei\n");
  for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<n;i++){
  		for(j=0;j<m;j++){
  			printf(" %d",a[i][j]);
  			if(j==m-1){
  				printf("\n");}
  				}
}
 b=m*n;
  spirala(a,m,n,V);
  afisare(V,b);
  printf("\n");
}
