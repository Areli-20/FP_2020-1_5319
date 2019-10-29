#include <stdio.h>
#include <stdlib.h>

int valor (char n){
//primero declaramos las variables 
  int y;
  switch(n){
  case 'j':	
  	y=10;
  	break;
  case 'J':	
  	y=10;
  	break;
  case 'Q':	
  	y=10;
  	break;
  case 'q':	
  	y=10;
  	break;
  case 'A':	
  	y=11;
  	break;
  case 'a':	
  	y=11;
  	break;    	    	
  }
 return y; 
}

int main(int argc, char* argu[]){
	int imp,
	coi; //coi es equivalente a char o int
	for(int i=1;i<argc;i++){ //lista a recorrer 
            //coi tendra un valor booleno
		coi=argu[i][0]=='j'||argu[i][0]=='J'||
		argu[i][0]=='q'||argu[i][0]=='Q'||argu[i][0]=='k'
		||argu[i][0]=='K'||argu[i][0]=='a'||argu[i][0]=='a';
	
		if(coi==1){
			imp=valor(argu[i][0]);
		}
		else{
			imp=atoi(argu[i]); //atoi pasa de texto a entero
		}
	printf("%i\n",imp);	
	}
	
	
	return 0;
}

