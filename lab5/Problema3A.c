#include<stdio.h>
#include<math.h>
int prim(long int n){
 int prim,d;
    prim = 0;
    for(d = 2;d <= sqrt(n);d++)
    {
        if(n%d==0)
            prim=1;
    }
    if(prim==1) {
        printf("Numarul nu este prim \n");
        return prim;
    }else{
        printf("Numarul este prim \n");
        return prim;
    }
    


}
int main () {
	int n;
	scanf("%d",&n);
	prim(n);
return 0;
}
