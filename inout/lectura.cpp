#include <stdio.h>

int main()
{
	int a, b,c ;
	scanf("%d%d", &a, &b);

	c= a+ b;

	printf("%d +  %d = %d \n", a, b, c  );


	return 0;
}


/*
$ ./lectura 
22 33         
22 +  33 = 55 
$ ./lectura 
     56565 6666
56565 +  6666 = 63231 
$ ./lectura 
              


  
 
 666 



     666
666 +  666 = 1332 

$ ./lectura 
1123456789
2123456789
1123456789 +  2123456789 = -1048053718 
(sobreflujo)
 */
