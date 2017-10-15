#include <stdio.h>
int main(){
	int w; //= 0x511f6;
	scanf("%x", &w);
	//0101 0001 0001 1111 0110
	printf("%x ", (w & (0xf<<8))>>8 );
	printf("%x ", (w & (0xf<<4))>>4 );
	printf("%x ", w & 0xf );
}
