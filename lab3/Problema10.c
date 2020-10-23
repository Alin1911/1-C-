#include <stdio.h>
int main()
{int n , nr=0,i,j;
printf("Introduceti valoarea n = ");
scanf("%d", &n);
for(i=1;i<=n;i++){
	j=i;
	while (j)
		{nr++;
		j = j/10;
		}

	}
printf("%d\n",nr);
}
