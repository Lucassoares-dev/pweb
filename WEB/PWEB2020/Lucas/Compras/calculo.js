function desbloquear(valor){

    var status =document.getElementById('produto1').disabled;
    
    

    if(valor == 'liberar' && !!status){
    document.getElementById('produto1').disabled = false;
    
    }
    else{
    document.getElementById('produto1').disabled = true;
    } 
}

function check(valor){
    var status2 =document.getElementById('produto2').disabled;

    if(valor == 'liberar' && !!status2){
    document.getElementById('produto2').disabled = false;
    }
    else{
    document.getElementById('produto2').disabled = true;
    } 

}

function check3(valor){
    var status3 =document.getElementById('produto3').disabled;

    if(valor == 'liberar' && !!status3){
    document.getElementById('produto3').disabled = false;
    }
    else{
    document.getElementById('produto3').disabled = true;
    } 

}

function check4(valor){
    var status4 =document.getElementById('produto4').disabled;

    if(valor == 'liberar' && !!status4){
    document.getElementById('produto4').disabled = false;
    }
    else{
    document.getElementById('produto4').disabled = true;
    } 

}

function check5(valor){
    var status5 =document.getElementById('produto5').disabled;

    if(valor == 'liberar' && !!status5){
    document.getElementById('produto5').disabled = false;
    }
    else{
    document.getElementById('produto5').disabled = true;
    } 

}

function check6(valor){
    var status6 =document.getElementById('produto6').disabled;

    if(valor == 'liberar' && !!status6){
    document.getElementById('produto6').disabled = false;
    }
    else{
    document.getElementById('produto6').disabled = true;
    } 

}

function calculo(){

    var qtd =parseFloat(document.getElementById('produto1').value);
    var qtd2 =parseFloat(document.getElementById('produto2').value);
    var qtd3 =parseFloat(document.getElementById('produto3').value);
    var qtd4 =parseFloat(document.getElementById('produto4').value);
    var qtd5 =parseFloat(document.getElementById('produto5').value);
    var qtd6 =parseFloat(document.getElementById('produto6').value);
    var cupom = parseFloat(document.getElementById('select1').value)
    var entrega = parseFloat(document.getElementById('select2').value)
    var parcelamento = parseFloat(document.getElementById('select3').value)   
    
    var soma = ((qtd *60) +(qtd2 *100)+(qtd3 *50) +(qtd4 *30)+(qtd5 *150)) ;
    var cupom = soma * cupom;
    var entrega = ((soma - cupom)+entrega) ;
    var total = entrega / parcelamento;     
        document.getElementById('result').value =total; 
}