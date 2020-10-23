#include<stdio.h>
#include<stdlib.h>
int main()
{
    int capat, indice=0, n, t, i=1;
    capat=5;
    n=0;
    int *v = malloc (capat*sizeof(int));
    while(i!=0){
        scanf("%d",&i);
        v[indice++]=i;
        n++;
        if(n==5){
                n=0;
                capat+=5;
                printf("Valoare noua= %d\n",capat);
                v=realloc(v,capat*sizeof(int));
        }
    }
    v[indice-1]='\0';
    for(i=0;i<indice-1;i++){
        printf(" %d",v[i]);}
    printf("\n");
    free(v);
    return 0;
}
