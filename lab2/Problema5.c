/*3 laturi pot forma un triunghi(nu ai pus restrictiile)*/
#include <stdio.h>
int main(){
long int a,b,c,z=0;
while(z==0){
	scanf("%ld %ld %ld",&a, &b ,&c);
	if(1000000000>=a && a>=-1000000000 && 1000000000>=b && b>=-1000000000 && 1000000000>=c && c>=-1000000000 && a+b+c!=0)
		z=1;
		else
		z=0;
	}
if(z==1){if(a+b<=c||a+c<=b||b+c<=a)
		{printf("NU\n");}
		else
		{printf("DA\n");}}
return 0;
}
