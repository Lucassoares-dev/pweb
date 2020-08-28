#include <stdio.h>

void teste(void){
	
	int variavelAutomatica = 2;
	variavelAutomatica *= 2;
	
	static int variavelEstatica = 2;
	variavelEstatica *= 2;
	
	printf ("Local Automatica = %i \n", variavelAutomatica);
	printf ("Local Estatica = %i \n", variavelEstatica);
	
}

int main(void){
	void teste(void);
	
	teste();
	teste();
	teste();
	
	return 0;
}
