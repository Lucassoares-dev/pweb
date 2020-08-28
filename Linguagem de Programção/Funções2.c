#include <stdio.h>

int main (void){
	
	float calcularAreaRetang( float x, float y );
	
	float area = calcularAreaRetang ( 10.0, 20.0);
	
	printf ("A area eh: %.2f ", area);
	
	return 0;
}
float calcularAreaRetang( float base, float altura ){

	float area = base * altura ;

	return area;
}
