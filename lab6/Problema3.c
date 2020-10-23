#include<stdio.h>
#include<math.h>
int magie(int a[], int b[], int a1, int b1, int c[]){
  int i, j, a3=0;
  for(i=0;i<a1;i++){
    for(j=0;j<b1;j++){
      if(a[i]==b[j]){
        c[a3]=a[i];
				a3++;
      }
    }
  }
	return a3;
}
int main(){
  int a[1000],b[1000],c[1000],a1,b1,i,z=0,x=0;
  while(z==0){
     printf("dim a1=");
     scanf("%d",&a1);
     if(a1>0 && a1<=1000)
       {z=1;}
       else
       {z=0;}
       }

  printf("a= ");
  for(i=0;i<a1;i++){
    scanf("%d",&a[i]);
  }
  while(x==0){
    printf("dim b1=");
    scanf("%d",&b1);
      if(b1>0 && b1<=1000)
        {x=1;}
        else
        {x=0;}
        }
  printf("b= ");
  for(i=0;i<b1;i++){
    scanf("%d",&b[i]);

  }
  int gh=magie(a,b,a1,b1,c);
  magie(a,b,a1,b1,c);
  for(i=0;i<gh;i++){	
    printf(" %d",c[i]);
  }
	printf("\n");
	return 0;
}
