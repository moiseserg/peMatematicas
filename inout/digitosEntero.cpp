#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	printf("%d ", n%10);
	printf("%d ", (n/10)%10 );
	printf("%d ", (n/100)%10 );
	printf("%d ", (n/1000)%10 );
	printf("%d ", (n/10000)%10 );
	return 0;
}
