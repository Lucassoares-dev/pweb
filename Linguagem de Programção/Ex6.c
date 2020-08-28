#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
void reg(char *v){
	
	int i;
	
	for(i=0;i<7;i++){	
	printf("Digite o V[%d]: ",i);
	scanf("%d", v);
	
	}
	
	system("cls");
	
	printf("Selecione uma Funcão\n 1 - Preencher Vetor\n 2 - Procurar um Valor no Vetor\n 3 - Multiplicar os Valores do Vetor\n[Outro] - Sair\n>> ");
	
}
void ver(char *v){
	
	int i,a,b=0;
	
	fflush(stdin);
	printf("digite o número quer procurar: ");
	scanf("%d", &a);
	
	for(i=6;i>-1;i--){	
	
		if(a == *(v+i)){
		
			printf("posição %d\n",i);
			b++;
		
		}
	
	}
	if(b=0){
	
		printf("-1");
	
	}
	
	fflush(stdin);
	fgetc(stdin);
	
	system("cls");
	
	printf("Selecione uma Funcão\n 1 - Preencher Vetor\n 2 - Procurar um Valor no Vetor\n 3 - Multiplicar os Valores do Vetor\n[Outro] - Sair\n>> ");
	
}
void alt(char *v){
	
	
	int i;
	
	printf("o novo vetor é V = [%d, ",*v);
	
	for(i=1;i<7;i++){	
	
	*(v+i) += *(v+i-1);
	printf("%d, ",*(v+i));
	
	}
	printf("%s%s]\n",8,8);
	
	system("cls");
	
	printf("Selecione uma Funcão\n 1 - Preencher Vetor\n 2 - Procurar um Valor no Vetor\n 3 - Multiplicar os Valores do Vetor\n[Outro] - Sair\n>> ");
	
	
}
*/
void main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int v[7],i,a,b;

	printf("Selecione uma Funcão\n 1 - Preencher Vetor\n 2 - Procurar um Valor no Vetor\n 3 - Multiplicar os Valores do Vetor\n[Outro] - Sair\n>> ");
	
	while(1){
		
		fflush(stdin);
		switch(fgetc(stdin)){
			
		//	case '1':reg(&v);break;
			case '1':{
				
				for(i=0;i<7;i++){	
			
					printf("Digite o V[%d]: ",i);
					scanf("%d", &v[i]);
	
				}		
	
				system("cls");
	
				printf("Selecione uma Funcão\n 1 - Preencher Vetor\n 2 - Procurar um Valor no Vetor\n 3 - Multiplicar os Valores do Vetor\n[Outro] - Sair\n>> ");
				
				break;
			}
		//	case '2':ver(&v);break;
			case '2':{
				
				b=0;
				
				printf("digite o número quer procurar: ");
				scanf("%d", &a);
	
				for(i=6;i>-1;i--){	
	
					if(a == v[i]){
		
						printf("posição %d\n",i);
						b++;
		
					}
	
				}
				if(b==0){
	
					printf("-1");
	
				}
	
				fflush(stdin);
				fgetc(stdin);
	
				system("cls");
	
				printf("Selecione uma Funcão\n 1 - Preencher Vetor\n 2 - Procurar um Valor no Vetor\n 3 - Multiplicar os Valores do Vetor\n[Outro] - Sair\n>> ");
				
				break;
			}
		//	case '3':alt(&v);break;
			case '3':{
				
				printf("o novo vetor é V = [%d",v[0]);
	
				for(i=1;i<7;i++){	
	
					v[i] += v[i-1];
					printf(" %d",v[i]);
	
				}
				printf("]\n");
				
				fflush(stdin);
				fgetc(stdin);
	
				system("cls");
	
				printf("Selecione uma Funcão\n 1 - Preencher Vetor\n 2 - Procurar um Valor no Vetor\n 3 - Multiplicar os Valores do Vetor\n[Outro] - Sair\n>> ");
				
				break;
			}
			
			default: exit(0);break;
			
		}
		
	}
	
}
