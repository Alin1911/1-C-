/*transformarea din baza 16 in baza 2*/
#include <stdio.h>
int main(){
int x, a[20],i=0,j;
printf("x=");
scanf("%d",&x);
while(x){
	a[i]=x%16;
	x=x/16;
	i++;
	}
printf("i=%d\n",i);
for(j=i-1;j>=0;j--){
	if(a[j]<=9)printf("%d",a[j]);
	if(a[j]>9)printf("%c",a[j]+55);
	}
printf("\n");
return 0;
}
