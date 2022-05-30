#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int interger1;
	int interger2;
	int sum;
	
	printf( "Enter first interger\n");
	scanf( "%d", &interger1 );
	
	printf( "Enter second interger\n");
	scanf( "%d", &interger2 );
	
	sum= interger1 + interger2;
	printf ( "sum is %d\n", sum );
	return 0;
}
