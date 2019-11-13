 #include<stdio.h>
 #include<stdlib.h>
 
 double raiz(double num, double tolerancia, double resultado){ //declaramos la funcion raiz
     double division,diferencia;
      division=num/resultado; //algoritmo para usar una raiz
     diferencia=resultado-division;
	 diferencia=diferencia> 0? diferencia:-diferencia;//si la diferencia es menor o igual que la tolerancia, se regresa el resultado
     if(diferencia<=tolerancia){
         return resultado;
     }
     else{

         resultado=(resultado+division)/2;//se busca un nuevo candidato
		 return raiz(num,tolerancia,resultado);//se regresa el valor con el nuevo candidato
     }

     }
     int main (int argc, char*argu[]){
    double num,tolerancia,resultado;
	num=atof(argu[1]);//los argumerntos se guardan en otras variables tipo float
    tolerancia=atof(argu[2]);
    resultado=atof(argu[3]);
    resultado=raiz(num,tolerancia,resultado);
    printf("%lf\n",resultado);
    
}
