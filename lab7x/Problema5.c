//Scrieţi o funcţie care calculează panta şi ordonata pentru o dreaptă dată prin 2 puncte.
#include<stdio.h>
#include<string.h>
#include<math.h>
void panta(int x1, int y1, int x2, int y2, float *m, float *n){
  *m=(y2-y1)/(x2-x1);
  *n=y1-(*m)*x1;
}
int main(){
	int x1, y1, x2, y2, x3, y3;
  float m, n;
	printf("x1=");
	scanf("%d",&x1);
	printf("y1=");
	scanf("%d",&y1);
  printf("x2=");
	scanf("%d",&x2);
	printf("y2=");
	scanf("%d",&y2);
  panta(x1, y1, x2, y2, &m, &n);
  printf("x3=");
  scanf("%d",&x3);
  printf("y3=");
	scanf("%d",&y3);
  if((m*x3+n)==y3){
    printf("DA");
  }else printf("NU");
	printf("\n");
}
