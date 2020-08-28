#include <stdio.h>

void main(){
	
	int max,min=1,a;
	
	do{
		
	system("cls");
	
	printf("digite um numero impar: ");
	scanf("%d",&max);
	
	}while(max%2==0);
	
	while(max>=min){
		
		for(a=0;a<=max;a++){
			
			if(a<min){
				
				printf(" ");
				
			}
			else{
				
				printf("%d",a);
				
			}
			
		}
		printf("\n");
		
		++min;
		--max;
		
	}
	
}
