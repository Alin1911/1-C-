#include<stdio.h>
#include<math.h>

int arie_intersectie(int x11, int y11, int x12, int y12, int x21, int y21, int x22, int y22){
  int left;
  left=fmax(x11,x21);
  int right;
  right=fmin(x12,x22);
  int top;
  top=fmin(y11,y21);
  int bot;
  bot=fmax(y12,y22);
  int s;
  s=(bot-top)*(left-right);
  printf("%d\n",s);


  }
int main(){
  int x11,y11,x12,y12,x21,y21,x22,y22;
  scanf("%d %d %d %d %d %d %d %d",&x11,&y11,&x12,&y12,&x21,&y21,&x22,&y22);
   arie_intersectie(x11,y11,x12,y12,x21,y21,x22,y22);

}
