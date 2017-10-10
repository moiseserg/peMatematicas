#include <stdio.h>

int  main(){
	char a=65;
	char b=100; 

	printf("%c %d\n", a,a );
	printf("%c %d\n", b,b );

	printf("%d\n", a & b );
	printf("%d\n", a | b );
	printf("%d\n", a ^ b );


	printf("c1 %d c2  %d\n", ~a, ~a+1 );

	printf("%d\n", a<<1 );
	printf("%d\n", a<<2 );
	printf("%d\n", a<<4 );

	printf("%d\n", b<<1 );
	printf("%d\n", b<<2 );
	printf("%d\n", b<<4 );

	printf("%d\n", a>>1 );
	printf("%d\n", a>>2 );
	printf("%d\n", a>>4 );

	printf("%d\n", b>>1 );
	printf("%d\n", b>>2 );
	printf("%d\n", b>>4 );


	printf("%-15s%-15s%-20s\n",  "ramirez", "sanchez", "juan manuel");
	printf("%-15s%-15s%-20s\n",  "santos", "guzman", "salvador");
	printf("%-15s%-15s%-20s\n",  "juarez", "santa rosa", "mari");
	

}
