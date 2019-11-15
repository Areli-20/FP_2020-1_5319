#include<stdio.h>
#include<stdlib.h>
#include<math.h>//para las raices

//nuestra funciopn principal
int main(int argc, char* argu[]){
	//las tres entradas que son los valores de ax^2+bx+c=0
	double a, b, c, im, x1, x2, raiz, x;
	//los unicos parametros de entrada
	a=atof(argu[1]);
	b=atof(argu[2]);
	c=atof(argu[3]);
	//hacemos la operacion de la raiz
	raiz=((b*b)-(4*a*c));
	
	//poner una condicion cuando det=0
	if(raiz==0){
		x=(-b)/(2*a);
		//solo un resultado ya que 0 no tiene valor
		printf("%.2lf\n", x);
	}
	
	if(raiz>0){
		//dos resultados
		x1=(-b+sqrt(raiz))/(2*a);
		x2=(-b-sqrt(raiz))/(2*a);
		//imprimimos ambos resultados
		printf("%.2lf\n", x1);
		printf("%.2lf\n", x2);
	}
	//cuando la raiz es imaginaria
	if(raiz<0){
		raiz=(-1*raiz);//para que la raiz sea positiva y pueda hacerse la operacion y solo asignar el i
		//x para el resultado real
		x=(-b)/(2*a);
		//ahora el resultado imaginario
		im=(sqrt(raiz))/(2*a);
		//imprimimos ambos para la resta y la suma
		printf("%.2lf + %.2lfi\n", x, im);
		printf("%.2lf - %.2lfi\n", x, im);
			
	}
	return 0;
}

