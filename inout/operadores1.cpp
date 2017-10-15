#include <stdio.h>

int main(){
	char a=5, b=69;
	char c= a & b;
	char d= a | b;
	printf("AND %d OR %d \n", a & b , a | b  );
	printf("XOR %d NOT %d \n", a ^ b ,  ~a  );
	
	printf("SUMA %d RESTA %d \n", a + b , a - b  );
	printf("corrimiento a la izquierda  %d \n", a << 1 );
	printf("corrimiento a la izquierda  %d \n", a << 2 );
	printf("corrimiento a la izquierda  %d \n", a << 4 );
	return 0;
}

