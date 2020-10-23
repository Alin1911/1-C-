#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 200  //maximul de litere al unei linii


void citiere(char *S_cautat, int  *nr_linii, char ***text)
{
	//printf("Sirul cautat="); //citim sirrul cautat
	fgets(S_cautat,30,stdin);
	S_cautat[strlen(S_cautat)-1]='\0';//eliminam terminatorul de sir
		        
	*nr_linii=101;
	while( *nr_linii > 100 || *nr_linii < 0 ){
		//printf("Numarul de linii al textului="); //citim numarul de linii al textului
		scanf("%d", *(&nr_linii));               // trebuie sa apartina intervalului (0;100)
		}

	//printf("Text=\n");
	*text=(char**)malloc(sizeof(char*)*(*nr_linii));// alocam memorie pentru vectorul de pointeri

	for ( int i=0 ; i < (*nr_linii) ; i++ ){
		(*text)[i]=(char*)malloc(sizeof(char)*max); //alocam memorie pentru fiecare pointer
	}
	getchar();
	for ( int i=0 ; i < (*nr_linii) ; i++ ){
		fgets((*text)[i], max, stdin);  //citim textul pointer cu pointer
		//(*text)[i][strlen((*text)[i])-1]='\0';			        
	}
}


char *cauta_si_afiseaza( char *S_cautat, int nr_linii, char *text )
{
	int dim_L_text, dim_S_cautat;
	char *poz, *gasit;
	char *newv = (char *) malloc(400*sizeof(char)); //alocam memorie pointerului newv care va contine sirul modificat
	char S_de_inlocuit1[45], S_de_inlocuit2[55]={"\e[0;31m"}; //creez un sir pe care il voi pune in locul sirului S_cautat

	strcpy(S_de_inlocuit1,S_cautat);
	strcat(S_de_inlocuit1,"\e[m");
	strcat(S_de_inlocuit2,S_de_inlocuit1); // am creat sirul 2 pe care il voi pune in locul unde se alfa S_cautat

	dim_S_cautat=strlen(S_cautat); //dimensiunea sirului cautat
	dim_L_text=strlen(text); //dimensiune line de text
	poz = text; //poz este o copie a pointerului text,pentru a putea lucra fara a modifica sirul initial

	if( strstr(poz, S_cautat) != NULL ) //verificam daca exista sirul cautat in linia de text pentru a sti daca afisam ceva
	{
		gasit = strstr(poz, S_cautat); //gasit este prima aparitrie a sirului cautat in linia de text
		while ( gasit != NULL ) {
			strncat(newv, poz, gasit - poz); //punem la sirul newv primele gasit-poz  caractere
			strcat(newv, S_de_inlocuit2); //punem sirul de inlocuit
			poz = gasit + dim_S_cautat; //modificam pozitia de unde se cauta sirul cautat
			gasit = strstr(poz,S_cautat); //cautam mai departe aparitii ale sirului
																		           }
			strncat(newv, poz, text + dim_L_text - poz); //adaugam caracterele de dupa ultima pozitie(pozitie finala dupa ce am adaugat noul sir) gasita a sirului cautat
			printf("%s", newv); // afisam linia de text
			return 0;
		}
		else{
			return 0; // nu afisam nimic daca nu exista cuvantul
		}
		free(newv);
		free(gasit);
		free(poz);
}


int main(){
	char S_cautat[30], **text;
	int nr_linii;

	citiere( S_cautat, &nr_linii, &text );
	for ( int i=0 ; i < nr_linii ; i++ ){ //citim linie cu linie textul si apelam functia
		cauta_si_afiseaza(S_cautat, nr_linii, text[i]);
	}
	for (int i = 0; i < nr_linii; i++)
		free(text[i]); //eliberam memoria  fiecarui pointer
	free(text); //eliberam  memoria vectorului de pointeri
	return 0;
}


