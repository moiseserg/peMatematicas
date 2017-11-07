#include <stdio.h>

//Regresa un entero (int)
int esMayuscula(char letra){
	if(letra >='A' && letra<='Z')
		return 1;
	else
		return 0;
}

int esMinuscula(char letra){
	if(letra >='a' && letra<='z')
		return 1;
	else
		return 0;
} 

int esLetra(char letra){
	return esMinuscula(letra) || esMayuscula(letra);
}

char aMayuscula(char  c){
	if( esLetra(c) && esMinuscula(c) )
			return c-32;
	return c;	
}


char aMinuscula(char  c){
	if( esLetra(c) && esMayuscula(c) )
			return c+32;
	return c;	
}


int main(){
	char c;
	int bandera = 1;
	while(scanf("%c", &c) != EOF){
		//printf("%c", c );
		//
		if(esLetra(c)==0){
			printf("%c", c );
			bandera=1;
		}
		else if(bandera==1){
			printf("%c", aMayuscula(c) );
			bandera=0;
		}
		else if(bandera==0){
			printf("%c", aMinuscula(c) );
		}

	}

	return 0;
}
