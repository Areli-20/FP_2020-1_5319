#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	float n1, n2, suma, resta, division, multiplicacion;
	n1=atof(argv[1]);
	n2=atof(argv[2]);
	suma=n1+n2;
	resta=n1-n2;
	multiplicacion=n1*n2;
	division=n1/n2;
	printf("la suma es: %.2f\n ",suma);
	printf("la resta es: %.2f\n",resta);
	printf("la multiplicacion es: %.2f\n",multiplicacion);
	printf("la division es: %.2f\n",division);
	
	
	return 0;
}

