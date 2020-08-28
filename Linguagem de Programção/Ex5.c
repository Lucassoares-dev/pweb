#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(char *frase, char *palavra){
	
	int ret=0, a=-1, b, c;
	
	for(b=0; *(frase+b)!='\0'; b++, a++, c=0)
	{
	
		if(*(palavra+a) != *(frase+b))
		{
			a=-1;
		}
	
		if(*(palavra+(a+1)) =='\0')
		{
			ret++;
			a=-1;	
			c=1;
		}

		if(*(frase+(b+1)) != *palavra && c)
		{
			b--;
		}
	}

	return ret;
	
}

void main(){	

	char frase[250], palavra[47];
	
	printf("Digite uma frase: ");
	gets(frase);
	printf("Digite uma palavra: ");
	gets(palavra);
	
	printf("A palavra aparece: %d vezes.", check(&frase,&palavra));

}
