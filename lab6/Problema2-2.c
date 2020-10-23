#include<stdio.h>
#include<math.h>
void unghi(float a,  float b, float c, float *A, float *B, float *C){
  float X, Y, Z;
  X=(b*b+c*c-a*a)/(2*b*c);
  Y=(a*a+c*c-b*b)/(2*a*c);
  Z=(a*a+b*b-c*c)/(2*a*b);
  *A=acos(X)*(180/M_PI);
  *B=acos(Y)*(180/M_PI);
  *C=acos(Z)*(180/M_PI);

}
int main(){
  float a, b, c;
  float A, B, C;
  printf("Dati a=");
  scanf("%f",&a);
  printf("\n");
  printf("Dati b=");
  scanf("%f",&b);
  printf("\n");
  printf("Dati c=");
  scanf("%f",&c);
  printf("\n");
  unghi(a,b,c,&A,&B,&C);
  printf("%.3f ,%.3f ,%.3f\n",A,B,C);

}
