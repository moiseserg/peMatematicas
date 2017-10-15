#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d:%d", &a, &b);
	printf("%3d:%05d\n", a, b );
	printf("%x  %X %o\n", a,a,a );

	scanf("%x", &c);
	printf("%X %o %i\n", c, c, c );

	return 0;
}
