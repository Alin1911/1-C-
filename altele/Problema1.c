/*Transformare din baza 10 in baza 2*/
#include <stdio.h>
int main(){
int x, a[20],i=0,j;
printf("x= ");
scanf("%d",&x);
while(x){
	a[i]=x%2;
	x=x/2;
	i++;
	}
printf("%d\n",i);
for(j=i-1;j>=0;j--){
	printf("%d",a[j]);
	}
return 0;
}
