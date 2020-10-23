/*Transforamre din baza 2 in baza 10(nu ai pus restrictiile)*/
#include <stdio.h>
int main(){
long int x, s=0,c=0,p=1;
printf("x= ");
scanf("%ld",&x);
while(x){
	c=x%10;
	s=s+c*p;
	x=x/10;
	p=p*2;
	}
printf("%ld\n",s);
return 0;
}
