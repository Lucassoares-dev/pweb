#include <stdio.h>

void SalBruto(float *sal,int tvg,int tvn){
	
	if(tvg>=10){
		
		(*sal)+=tvg*50;
		
	}
	else{
		
		(*sal) +=tvg*5;
		
	}
	
	if(tvn>=20){
		
		(*sal)+=tvn*20;
		
	}
	else{
		
		(*sal)+=tvn*2;
		
	}
	
}

void SalLiqui(float *sal){
	
	(*sal)*= 0.92;
	
	if((*sal)>=900){
		
		(*sal)*=0.85;
		
	}
	
}

void main(){
	
	float sal;
	
	int tvg,tvn;
	
	printf("digite o seu salario fixo R$");
	scanf("%f",&sal);
	
	printf("digite o numero de TVs de tela grande vendidas: ");
	scanf("%d",&tvg);

	printf("digite o numero de TVs comuns vendidas: ");
	scanf("%d",&tvn);
		
	SalBruto(&sal,tvg,tvn);
	
	printf("seu salario bruto e R$%.2f\n",sal);
	
	SalLiqui(&sal);
	
	printf("seu salario liquido e R$%.2f\n",sal);
	
}
