#include <stdio.h>

int fibonacci(int n){
	int i;
	int aux;
	int x=0;
	int y=1;
	for (i=0; i<=n; i=i+1);
	aux = x+y;
	x = y;
	y = aux;
}

int main() {

	int a = fibonacci(5);
	printf("result : %i\n", a);
 
	printf("Hello World");
	return 0;
}



