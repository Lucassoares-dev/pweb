function calcular(){
    var total = 0;
    if(document.getElementById("customRadio1").checked == true){
        total = 20;
    }
    else if(document.getElementById("customRadio2").checked == true){
        total = 25;
    }
    else if(document.getElementById("customRadio3").checked == true){
        total = 30;
    }

    var acompanhamentos = 0;
    
    if(document.getElementById("saladas").checked == true){
        acompanhamentos+=5;
    }
    if(document.getElementById("legumes").checked == true){
        acompanhamentos+=5;
    }
    if(document.getElementById("farofa").checked == true){
        acompanhamentos+=5;
    }
    if(document.getElementById("fritas").checked == true){
        acompanhamentos+=5;
    }

    var desconto = 0;
    
    if(document.getElementsByName("select")[0].value == "1"){
        desconto+=10;
    }
    if(document.getElementsByName("select")[0].value == "2"){
        desconto+=5;
    }
    if(document.getElementsByName("select")[0].value == "3"){
        desconto+=5;
    }
    if(document.getElementsByName("select")[0].value == "4"){
        desconto+=5;
    }
    total+=acompanhamentos;
    total=total- desconto;    
    
    document.getElementById("total").innerHTML = "Total = R$" + total + ",00";
    
    
}

