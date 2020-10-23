#include <stdio.h>
int main()
{float x,y;
double dx=0, dy=0;
int n,i;
scanf("%d %f %e",&n, &x ,&y);
for(i=0;i<n;i++){
	dx=dx+x;
	dy=dy+y;
	 if(n%10==0){
		printf("%f %e %f %e \n",dx ,dx ,dy ,dy); 
		}
	}

}

