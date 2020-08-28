#include <stdio.h>
#include <string.h>

void main(){
	
	int ida,a,opca=0,opcb=0,opcbx=0,opcd=0;
	float pes,alt,opcc=0;
	char olh[9],cab[9];
	
	for(a=0;a<20;a++){
		
	printf("digite sua idade: ");
	scanf("%d",&ida);
	
	printf("digite seu peso: ");
	scanf("%f",&pes);
	
	printf("digite sua altura: ");
	scanf("%f",&alt);
	
	fflush(stdin);
	printf("digite a cor dos seus olhos\n- Azul\n- Preto\n- Verde\n- Castanho\n>> ");
	gets(olh);
	
	fflush(stdin);
	printf("digite a cor dos seus cabelos\n- Preto\n- Castanho\n- Louro\n- Ruivo\n>> ");
	gets(cab);
	
	if(ida>50 && pes<60){
		
		opca++;
		
	}
	if(alt<1.5){
		
		opcb+=ida;
		opcbx++;
		
	}
	if(toupper(olh[0]) == 'A'){
		
		opcc++;
		
	}
	if(toupper(cab[0]) == 'R' && toupper(olh[0]) !='A'){
		
		opcd++;
		
	}
	
	}
	
	printf("%d pessoas tinham mais de 50 anos e menos de 60 quilos\n",opca);
	printf("as pessoas com menos de 1.5m de altura tinham idade media de %d\n",opcb/opcbx);
	printf("%%%.2f dos participantes tinham olhos azuis\n",opcc/20);
	printf("%d participantes eram ruivos sem olhos azuis\n",opcd);
	
}
