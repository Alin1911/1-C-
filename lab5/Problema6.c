#include<stdio.h>
#include<math.h>
float dist(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
int main()
{
    int n, i, j, b=0;
    float max=0;
    printf("Introduceti n = ");
    scanf("%d", &n);
    int x[n], y[n];
    printf("Introduceti coordonatele punctelor, 2 cate 2, separate printr-un spatiu :\n");
    for(i=0; i<n; i++)
        scanf("%d %d", &x[i], &y[i]);
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
            if(dist(x[i],y[i],x[j],y[j])>max)
                max=dist(x[i],y[i],x[j],y[j]);

    printf("Date de iesire :\n");
    for(i=0; i<n-1 && b==0; i++)
        for(j=i+1; j<n; j++)
            if(dist(x[i],y[i],x[j],y[j])==max)
            {
                printf("%d %d\n%d %d",x[i],y[i],x[j],y[j]);
                b=1;
            }
    printf("\n%f", max);
    return 0;
}
