#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argu[]){
	//se declara otra lista para guardar la lista de argu
	int lista[argc],suma=0;
	//se declara al promedio como numero real debido a que el resultado es con decimales 
	float promedio;
	//este for es para copiar argu a la lista 
	for(int i=1;i<argc;i++){
		lista[i]=atoi(argu[i]);

	}
// este for es para sumar los elementos de la lista 
	for(int i=1;i<argc;i++){
		suma=suma+lista[i];
	}
	// el promedio se divide por argc-1
	// en el printf se especifican la cantidad de decimales 
	promedio=(float)suma/(argc-1);
	printf("%.2f\n",promedio);

	return 0;
}

