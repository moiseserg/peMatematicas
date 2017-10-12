#include <stdio.h>

int main(){
	int n, i;

	scanf("%d", &n);

	printf("%d ",  ( (1 << 10) & n ) > 0 );
	printf("%d ",  ( (1 << 9 ) & n ) > 0 );
	printf("%d ",  ( (1 << 8 ) & n ) > 0 );
	printf("%d ",  ( (1 << 7 ) & n ) > 0 );
	printf("%d ",  ( (1 << 6 ) & n ) > 0 );
	printf("%d ",  ( (1 << 5 ) & n ) > 0 );
	printf("%d ",  ( (1 << 4 ) & n ) > 0 );
	printf("%d ",  ( (1 << 3 ) & n ) > 0 );
	printf("%d ",  ( (1 << 2 ) & n ) > 0 );
	printf("%d ",  ( (1 << 1 ) & n ) > 0 );
	printf("%d\n", (  (1     ) & n ) > 0 );
	return 0;
}
