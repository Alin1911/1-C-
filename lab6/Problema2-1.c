#include<stdio.h>
#include<math.h>
void unghi(float *v, float *ie){
  float X, Y, Z;
  X=(v[1]*v[1]+v[2]*v[2]-v[0]*v[0])/(2*v[1]*v[2]);
  Y=(v[0]*v[0]+v[2]*v[2]-v[1]*v[1])/(2*v[0]*v[2]);
  Z=(v[0]*v[0]+v[1]*v[1]-v[2]*v[2])/(2*v[0]*v[1]);
  ie[0]=acos(X)*(180/M_PI);
  ie[1]=acos(Y)*(180/M_PI);
  ie[2]=acos(Z)*(180/M_PI);
}
int main(){
  float v[3],ie[3];
  printf("Dati a=");
  scanf("%f",&v[0]);
  printf("\n");
  printf("Dati b=");
  scanf("%f",&v[1]);
  printf("\n");
  printf("Dati c=");
  scanf("%f",&v[2]);
  printf("\n");
  unghi(v ,ie);
  printf("%.3f ,%.3f ,%.3f\n",ie[0],ie[1],ie[2]);

}
