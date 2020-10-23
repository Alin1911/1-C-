//Scrieţi o funcţie ce interschimbă două numere întregi.
#include<stdio.h>
#include<string.h>
#include<math.h>
void swap(int *pa, int *pb){
	int aux;
	aux=*pa;
	*pa=*pb;
	*pb=aux;
}
int main(){
	int a, b;
	printf("primul numar=");
	scanf("%d",&a);
	printf("al doilea numar=");
	scanf("%d",&b);
	swap(&a,&b);
	printf("nr1=%d nr2=%d", a, b);
	printf("\n");
}
