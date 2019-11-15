#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argu[]){
	int lista[argc-1];
	int i=0, j=1, num, guardar;
	
	//dos listas para que guarde
	while(i<argc-1){
		num=atoi(argu[j]);
		lista[i]=num;
		i++; //incrementan
		j++;
	}
	//recorra lista y no perderla
	for(i=0; i<argc; i++){
		//cambiar lugares
		for(j=0; j<argc-1-i; j++){
			//para hacerlo hay que usar un if(cambiar lugares de menor a mayor) intercambiar
			if(lista[j]>lista[j+1]){
			guardar=lista[j];
			lista[j]=lista[j+1];
			lista[j+1]=guardar;
			}
		}
	}
	
	for(i=0; i<argc-1; i++){
	//recorre lsita nueva, en i porque ahí guardamos todo
	printf("%i  ", lista[i]);
	}
	return 0;
}
