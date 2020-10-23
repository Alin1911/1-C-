/*Generare numere aleatoriu(nu ai pus restrictiile)*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int seed=1,n;
scanf("%d",&seed);
srand(seed);
for(seed;seed<=3;seed++){
	n=rand();
	printf("  Nr=%d", n);
	}
return 0;
}
