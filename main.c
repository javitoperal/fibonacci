#include <stdio.h>

int traduction(int a){
	int unidades = 0;
	int decenas = 0;
	int centenas = 0;
	centenas = a/100;
	decenas = a/10 - centenas*10;
	unidades = a - decenas*10 - centenas*100;
	printf("centenas : %i\n", centenas);
	printf("decenas : %i\n", decenas);
	printf("unidades : %i\n", unidades);

	
	return 0;
}

int fibonacci(int n){
	int i;
	int result;
	int x=0;
	int y=1;

	if (n == 1) {
		return 0;
	}
	if (n == 2) {
		return 1;	
	}
	
	for (i=3; i<=n; i=i+1) {
		result = x+y;
		x = y;
		y = result;
	}
	return result;
	
}


int main() {

	traduction(789);
/*	
	int altocapo = fibonacci(300);
	printf("result : %i\n", altocapo);
 
	printf("Hello World");
*/
	return 0;
}



