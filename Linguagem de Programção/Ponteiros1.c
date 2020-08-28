#include <stdio.h>

int main(){
	
	int x;
	x = 10;
	
	int *ponteiro;
	ponteiro = &x;
	
	int y = 20;
	*ponteiro = y;
	
	printf (" %i %i\n", x);
	
	getchar();
	
	return 0;
}
