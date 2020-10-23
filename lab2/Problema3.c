/*Tabel sin cos si x(nu ai pus restrictiile)*/
#include <stdio.h>
#include <math.h>
int main(){
double x,PI =M_PI;
printf("¦·······x¦··sin(x)¦··cos(x)¦\n");
for(x=0;x<=2*PI;x=x+PI/20){
	printf("|%lf|%lf|%lf|\n",x,sin(x),cos(x));				
	}
getchar();
return 0;
}
