#include <stdio.h>

int main (){
    
    int ida, med=0,num=0;
    
    while(1){
        
        printf("digite a idade\n");
        scanf("%d",&ida);
        
        if(ida<0){
            
            break;
            
        }
        else{
            
            num++;
            med+=ida;
            printf("media das idades ate agora: %d\n",med/num);
            
        }
        
    }
    
    return 0;
}