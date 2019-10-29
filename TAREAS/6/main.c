#include <stdio.h>
#include <stdlib.h>
int main (int argc, char* argu[]){
	int resultado, argumentoi[argc];//resultado es el que se va a imprimir

	for (int i=1;i<argc;i++){ //esta es la lista en donde se guardaran los numeros enteros

		resultado=1;
		//necesitaremos dos for  uno excluye a argu

	for (int j=1;j<argc;j++){
		argumentoi[j]=atoi(argu[j]);
		resultado=resultado*argumentoi[j];
	}
	resultado=resultado/argumentoi[i];
	printf("%i\n", resultado);
	}
	return 0;
}

