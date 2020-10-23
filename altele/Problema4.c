/*transformarea din zecimate in baza 2*/
#include <stdio.h>
int main(){
float x,s;
int p,i;
printf("x=");
scanf("%f",&x);
printf("p=");
scanf("%d",&p);
printf("0.");
for(i=1;i<=p;i++)
	{x=x*2;
	printf("%d",(int)x);
	x=x-(int)x;
	}
printf("\n");
return 0;
}
