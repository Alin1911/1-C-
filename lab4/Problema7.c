#include<stdio.h>
int main(){
int v[100],b=0,n,p,i,max=1,j,nr=1;
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
for(i=0;i<n-1;i++){
  if(v[i]<=v[i+1]){
    nr++;}
    else{if(nr>max)
      {max=nr;
      nr=1;
      p=i;
    }else {nr=1;}

    }
    if(i==n-2&&nr>max){max=nr;p=i+1;}
  }

  printf("\n max=%d",max);
  printf("\n poz=%d\n",p);
  for(i=p-max+1;i<=p;i++){
    printf(" %d ",v[i]);
  }

return 0;

}
