#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>

#define BUFMAX 100

int main (int argc, char *argv[] ) {
    FILE *src;
    char buffer[BUFMAX],mare[BUFMAX],ls[BUFMAX];
    int n=0,r=0;
    char *c;
    strcpy(c,argv[3]);
    src = fopen(argv[1], "r");
    if (!src) {
        fprintf(stderr,"Eroare! Nu am putut deschide fiserul sursa!\n");
     }
    else {
    switch(*c)
        {
            default:
                while (fgets(buffer, BUFMAX, src)) {
                    if (strstr(buffer, argv[2])) {
                        printf("%s", buffer) ;
                    }
                }
  
            case '-i':
                while(fgets(buffer,BUFMAX,src)){
                    fgets(mare,BUFMAX,src);
                    strcpy(ls,argv[2]);
                    for(int i =0;i<strlen(mare);i++){
                        mare[i]=tolower(mare[i]);
                    }
                    
                    for(int i =0;i<strlen(ls);i++){
                        ls[i]=tolower(ls[i]);
                    }
                     ;
                    if (strstr(mare, argv[2])) {
                        printf("%s", buffer) ;
                    }

                }
            case '-n':
                while(fgets(buffer,BUFMAX,src)){
                    n++;
                    if (strstr(buffer, argv[2])) {
                        printf("%d",n);
                        printf(" %s", buffer) ;
                    }
                }


            case '-c':  
                while(fgets(buffer,BUFMAX,src)){
                    n++;
                    if (strstr(buffer, argv[2])) {
                        printf(" %s", buffer) ;
                        r++;
                    }

                }
                printf("\n");
                printf("Numar total de linii:%d",r);
        }
    }
    printf("\n");
    return 0;
}
