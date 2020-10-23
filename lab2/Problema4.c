/*In ce cadran se afla punctul(nu ai pus restrictiile)*/
#include <stdio.h>
int main(){
int x,y,cad,b=0;
while(b==0){
	scanf("%d %d",&x, &y);
	if(1000>=x && x>=-1000 && 1000>=y && y>=-1000)b=1;
		else b=0;
	}
if(b==1){
	if(x>0 && y>0)printf("1\n");
	if(x>0 && y<0)printf("4\n");
	if(x<0 && y<0)printf("3\n");
	if(x<0 && y>0)printf("2\n");
	if(x==0 || y==0)printf("Punct pe axe\n");
	}
}
