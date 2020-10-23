/*Tipul unui trinunghi(nu ai pus restrictiile)*/
#include<stdio.h>
int main(){
float a,b,c,r=0;
int x ,y,z,i;
while(r==0){
	scanf("%f %f %f",&a,&b,&c);
	if((a+b>=c) || (a+c>=b) || (b+c>=a))
	r=1;
	else
	r=0;}
	


if(r==1){
	if(a==b && b==c && c==a)x=1;
		else x=0;
	if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a)y=1;
		else y=0;
	if(a!=b && a!=c && c!=b)z=1;
		else z=0;
	if(a==b || b==c || c==a)i=1;
		else i=0;
	if(x==1)printf("echilateral\n");
		else 	if(y==1 && i==1)printf("Dreptunghic isoscel\n");
			else	if(y==1)printf("Dreptunghic\n");
					else
						if(i==1)printf("isoscel\n");
						else	printf("oarecare\n");}
	
 return 0;
}
