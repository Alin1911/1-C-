#include <stdio.h>
#include<math.h>
double putere(double x, int n)
{
    return pow(x,n);
}
int factorial(int n)
{
    int i, x=1;
    for(i=1; i<=n; i++)
        x*=i;
    return x;
}
double taylor(double x, int n)
{
    int i;
    double y=1;
    for(i=1; i<=n; i++)
        y=y+putere(x,i)/factorial(i);
    return y;
}
int main()
{
    double x;
    int n, b=1;
    printf("Introduceti x = ");
    scanf("%lf", &x);
    printf("Introduceti n = ");
    while(b)
    {
        scanf("%d", &n);
        if(n>=0 && n<1000)
            b=0;
    }
    printf("e^%.2lf = %.4lf",x , taylor(x,n));
    printf("\n");
    return 0;
}
