//Scrieţi un program pentru citirea unei linii ce conţine cuvinte formate din litere mici şi alte şiruri şi afişarea doar a cuvintelor formate din litere mici.
#include<stdio.h>
#include<string.h>
#define MaxN 100
char *next (char *from, char *word) {
    int k, i;
            char *sep = "0123456789 `~!@#$%^&*()_+-={}|][';:/.,<>?\"";
    word = strtok (from, sep);
    k = 0;
    while (k == 0) {
        if (word == NULL) {
            return NULL;
        }
        for (i = 0; i < strlen (word); i++) {
            if (isupper(word[i])) {
                    k = 1;
            }
        }
        if (k == 1) {
            word = strtok (NULL, sep);
            k = 0;
        }
        else {
            return word;
        }
    }
}
int main () {
    char s[MaxN], *p;
    printf("Introdu sir:");
    gets (s);
    p = next (s, p);
    printf ("%s ", p);
    while ((p = next (NULL, p)) != NULL) {
        printf ("%s ", p);
    }
    return 0;
}
