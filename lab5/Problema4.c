#include<stdio.h>
#include<math.h>
int cmmmc(int a, int b){
  int x,y;
  x=a;
  y=b;
  while(x!=y)
      {
          if(x>y)
              x=x-y;
          else
              y=y-x;
      }
  return (a*b)/x;
}
int main(){
  int x1,x2,y1,y2,c,a,b,n=2;
  printf("Numarator1=");scanf(" %d",&x1);
  printf("Numitor1=");scanf(" %d",&y1);
  printf("Numarator2=");scanf(" %d",&x2);
  printf("Numitor2=");scanf(" %d",&y2);
  b=cmmmc(y1,y2);
  a=b/y1;
  c=b/y2;
  x1=x1*a;
  x2=x2*c;
  printf(" %d %d\n",x1,b);
  printf(" %d %d\n",x2,b);
  }
