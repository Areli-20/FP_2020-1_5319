#include<stdio.h>
 #include<stdlib.h>

 int saludos(int personas){ //declaramos laa funcion saludo de personas
     int total,saludo;
     saludo=personas-1;//el saludo son las personas menos el que da el saludo
	 if (saludo==0){//si solo hay una persona no hay saludos, este es nuestro caso base
		 return saludo;// regresa valor
         }
total=saludo+saludos(personas-1);//laa suma total de los saludos
return total;
 }
int main(int argc, char *argu[]){
int resultado,personas;
personas=atoi(argu[1]);//se utiliza el primer argumento
resultado=saludos(personas);//se llama a laa funcion 
printf("%i\n",resultado);
return 0;
 }
