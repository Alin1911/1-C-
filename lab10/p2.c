 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 #include<math.h>
 struct multime {
   unsigned char a;
};

void init(struct multime *m) // iniţializează mulţimea m cu mulţimea vidă
{
    for(int i=0; i<8 ;i++){
        m->a= m->a & (0<<i);
    }
}

void add(struct multime *m, int x) // adaugă pe x la mulţimea m
{
    m->a = m->a&(1<<x);
}
void del(struct multime *m, int x) // şterge pe x din mulţimea m
{
    m->a= m->a & (0<<x);
}

void print(struct multime *m) // afişează mulţimea m
{
    for(int i=0; i<8 ;i++){
        if(contains(m,i)){
           printf("%d",i);
           }
    }
}

int contains(struct multime *m, int x) // returnează 1 dacă x se află în mulţimea m şi 0 altfel
{
    for (int i=0;i<8;i++){
        if ((m->a & (1<<x))==(1<<x))return 1;
        else
            return 0;
    }
}

int main()
{
    struct multime v;

}

