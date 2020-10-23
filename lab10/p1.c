#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double integrala(double (*func) (double x), double a, double b, int n) {
    double h, s;
    int i;
    h = (b - a) / n;
    s = 0;
    for(i = 1; i < n; i++) {
        s += (*func)(a + i * h);
    }
    s += ((*func)(a) + (*func)(b)) / 2;
    s *= h;
    return s;
}

int main() {
    double a, b;
    int n;
    scanf("%lf%lf%d", &a, &b, &n);
    printf("%lf\n", integrala(sin, a, b, n));
    return 0;
}
