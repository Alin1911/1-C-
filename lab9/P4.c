#include <stdio.h>
#include <stdlib.h>
typedef struct vector {
    int *v;
    int cap;
    int n;
} vector;
void init_vector(vector *a, int nr) {
    a->cap = nr;
    a->n = 0;
    a->v = malloc(nr * sizeof(int));
}
void adauga_vector(vector *a, int nr) {
    if(a->n == a->cap) {
        a->cap = a->cap * 2;
        a->v = realloc(a->v, a->cap * sizeof(int));
    }
    a->v[a->n] = nr;
    a->n = a->n + 1;
}
void scrie_vector(vector *a) {
    int i;
    for(i = 0; i < a->n; i++) {
        printf("%d ", a->v[i]);
    }
    printf("\n");
}

int main() {
    int i;
    vector a;
    init_vector(&a, 20);
    for(i = 0; i <= 20; i++) {
        adauga_vector(&a, i);
        scrie_vector(&a);
    }
    return 0;
}
