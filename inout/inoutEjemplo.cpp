#include <stdio.h>

int main()
{
	char letra;

	//& para obtener la direccion de la variable
	scanf("%c", &letra);
	printf("Escribiste %c\n", letra );
	printf("+1 %c\n", letra+1 );
	printf("+2 %c\n", letra+2 );
	printf("+3 %c\n", letra+3 );
	printf("+4 %c\n", letra+4 );


	int num;
	scanf("%d", &num);
	printf("Escribiste %d\n", num);
	printf("+1: %i\n", num+1);
	printf("*2: %i\n", num*2);

	scanf("%x", &num);
	printf("%%x: %x\n", num);
	printf("%%X: %X\n", num);
	printf("%%d: %d\n", num);

	float numReal;
	scanf("%f", &numReal);
	printf("Escribiste %f\n", numReal);
	printf("+1: %f\n", numReal+1);
	printf("*2: %f\n", numReal*2);

	
	return 0;
}

/*
Ejemplo de ejecución
./inout 
y
Escribiste y
+1 z
+2 {
+3 |
+4 }
89
Escribiste 89
+1: 90
*2: 178
0x7f
%x: 7f
%X: 7F
%d: 127
99
Escribiste 99.000000
+1: 100.000000
*2: 198.000000

*/
