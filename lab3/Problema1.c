#include <stdio.h>
#include <stdlib.h>
int main()
{int i, c=0;
for(i=32;i<=127;i++){
	printf("%c = %d|", i, i);
	c=c+1;
	if(c==10){	
	 	printf("\n");
		c=0;}
	}
return 0;
}
