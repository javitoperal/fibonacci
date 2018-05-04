#include <stdio.h>

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

	int altocapo = fibonacci(2);
	printf("result : %i\n", altocapo);
 
	printf("Hello World");
	return 0;
}



