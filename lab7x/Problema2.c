//Scrieţi o funcţie care numără câte elemente pozitive, câte elemente negative şi câte elemente nule se află într-un vector.
#include <stdio.h>
void C(int v[], int n, int *poz, int *neg, int *nul)
{
    int i;
    for(i=0; i<n; i++)
        if(v[i]>0)
            (*poz)++;
        else if(v[i]<0)
            (*neg)++;
        else
            (*nul)++;
}
int main()
{
    int n, i, poz=0, neg=0, nul=0;
    printf("Introduceti n = ");
    scanf("%d",&n);
    int v[n];
    printf("Introduceti v = ");
    for(i=0; i<n; i++)
    {
            scanf("%d", &v[i]);
    }
    C(v,n,&poz,&neg,&nul);
    printf("Vectorul are %d valori pozitive\n", poz);
    printf("Vectorul are %d valori negative\n", neg);
    printf("Vectorul are %d valori nule\n", nul);
    return 0;
}
