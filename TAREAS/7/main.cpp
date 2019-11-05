#include<stdio.h>
#include<stdlib.h>

int main(int argc,char*argv[]){
	float x, y, resultado; //el float es porque usaremos numeros con punto decimal 
	int i; 
	
	
	x=atof(argv[1]); //representa la base 

	y=atof(argv[2]); //representa el exponente 
	
	resultado=1; //se asigana valores 
	
	for(i=0; i<y; i++){ 
		
		resultado=resultado*x;
	}
	
	printf("%.2f\n",resultado); //se imprime el resultado 
	
	return 0;
}
