#include <stdio.h>
int prim (int x)
{
int i, y=0;
for (i=2;i<=x/2;i++)
if (x%i!=0)
y=1;else y=0;
if(y=1) printf("%d",x);
}
int main()
{ 
    int n, a, i, f1=0, f2=1 , nr=0;
    printf("Introduceti n = ");
    scanf("%d", &n);
     prim(f1);
	prim( f2);
    for(i=3; i<=n; i++){
    	prim(f1+f2);
        f2=f2+f1;
        f1=f2-f1;}
	 }
 
   
