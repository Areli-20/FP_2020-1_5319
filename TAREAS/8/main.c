#include<stdio.h>
#include<stdlib.h>
int main(int argc, char*argu[]){
	/*El primer argu es un numero entero*/
	float x,y,resultado;
	/*El segundo es flotante*/
	x=atof(argu[1]);
	y=atof(argu[2]);
	/*se pregunta por el primer argumento*/
	
	if(x==0){
		/*El uno es para la conversion de F a C*/
		resultado=(y*1.8)+32;
		
		printf("%.2f\n",resultado);
	}
	/*Si no es uno debe de ser 0*/
	if(x==1){
		/*El 0 es para pasar de C a F*/
		resultado=(y-32)/1.8;
		
		printf("%.2f\n",resultado);
	}
	return 0;
}
