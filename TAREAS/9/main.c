 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 int main (int argc, char *argu[]){
			// numero en digitos
     int numero;
			// sterlen para caracteres
     numero=strlen(argu[1]);
			// argumentos en una nueva lista para guardar el numero
     char arguc[numero];
     int resultado=0;
			// lista ahi guada contidad de num
     int digitos[numero];
			// se suman caracteres de acuerdo con el numero de digitos
     for(int i=0;i<numero;i++){
			//se guarda el numero en list de caracter
         arguc[i]=argu[1][i];
			//ahora se guarda en la lista de enteros
         digitos[i]=atoi(&arguc[i]);
		// se suma every digito
         resultado=resultado=resultado+digitos[i];
     }
     
 printf("%i\n",resultado);
 return 0;
 }
