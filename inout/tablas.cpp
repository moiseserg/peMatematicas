#include <stdio.h>

int main(){
	int n, i=1;

	scanf("%d", &n);
	printf("%3d x %3d = %6d\n", i++, n, 1*n );
	printf("%3d x %3d = %6d\n", i++, n, 2*n );
	printf("%3d x %3d = %6d\n", i++, n, i*n );
	printf("%3d x %3d = %6d\n", i++, n, i*n );
	printf("%3d x %3d = %6d\n", i++, n, i*n );
	printf("%3d x %3d = %6d\n", i++, n, i*n );
	printf("%3d x %3d = %6d\n", i++, n, i*n );
	printf("%3d x %3d = %6d\n", i++, n, i*n );
	printf("%3d x %3d = %6d\n", i++, n, i*n );
	printf("%3d x %3d = %6d\n", i++, n, i*n );
	return 0;
}
