#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	float **note;
	int j, capat=4, i, nr_materii, terminat, n=1;

	 //scanam numarul de materii
	nr_materii=101;
	while( nr_materii > 100 || nr_materii < 0 ){
		scanf("%d", &nr_materii);         
	}

	note=malloc(sizeof(float)*(nr_materii)); //alocam memorie pentru vectorul de pointeri
	for (i=0;i<nr_materii;i++){
  		note[i] = (float *) malloc(capat * sizeof(float));// alocam memorie pentru fiecare pointer
  		scanf("%f", &note[i][n]);  // scanam note
  		terminat = note[i][n]; 
 		while (terminat) {	// aici verifica daca sa introdus valoarea zero cu ajutorul variabilei terminat
   			n++; // creste pozitia pe care punem nota
  			if (n == capat-1) { //verificam daca am ajuns la numarul maxim de elemente
      			capat = capat + 3; // incrementam capatul  cu 3
      			note[i] = (float *) realloc(note[i],capat * sizeof(float)); //realocam memorie 
    		}
    	scanf("%f", &note[i][n]); //scanam note
    	terminat = note[i][n]; //verificam de fiecare data ce valoare sa introdus
  		}
  		n=1; // vreau ca prima pozitie(0) sa ramana libera pentru a pune valoarea mediei
	}

	int ve[nr_materii],nr=0;//am nevoie de un vector in care sa stochez numarul de note pentru fiecare materie
	for(i=0;i<nr_materii;i++){ //numarul de note al fiecarei linii (stim ca are maxim 200 de note )
		for(j=1;j<200;j++){
			if(note[i][j] != 0){
				nr++;
			}else{break;}
		}
		ve[i]=nr;
		nr=0;
	}

	float medie=0;  //calculam media fiecarei linii de  note
	for(i=0;i<nr_materii;i++){
		for(j=1;j<ve[i]+1;j++){
			medie=medie+note[i][j];
		}
		medie=medie/(j-1);
		note[i][0]=medie; //punem media pe prima pozitie a fiecarei linii
		medie =0;
	}

	float max[nr_materii], aux;//creez un vector in care pun toate mediile si dupa le voi sorta
 	for(i=0;i<nr_materii;i++){
 		max[i]=note[i][0];
 	}
 	for(i=0;i<nr_materii;i++){ //sortez vectorul
 		for(j=0;j<nr_materii;j++){
 			if(max[i]>max[j]){
 				aux = max[i];
 				max[i]=max[j];
 				max[j]=aux;
 			}
 		}
 	}
 	for(i=0;i<nr_materii;i++){
 		for(j=0;j<nr_materii;j++){
 			if(note[j][0]==max[i]){//caut cea mai mare medie din vector , cand o gasesc o afisez
 				if(note[j][0]==10){printf("%.3f   ",note[j][0]);}else //daca are media 10 avem nevoie doar de 3 spatii si daca media <10 de 4
 				{printf("%.3f    ",note[j][0]);} 
 				note[j][0]=-1;
 				for(int m=1;m<ve[j]+1;m++){	
						printf(" %.0f",note[j][m]); // afisam result liniei
					}
			printf("\n");
 			}
 		}
 	}


	return 0;
}