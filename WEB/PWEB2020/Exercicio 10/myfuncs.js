var i= 0;

class Cliente
{
    constructor(sala, nome, quantidade){
        this.sala = sala;
        this.nome = nome;
        this.quantidade = quantidade;
    }
}

var cliente= [];

function salvar()
{

    let cliente = new Cliente();

    cliente.sala = parseInt(document.getElementById("idSala").value);
    cliente.nome = document.getElementById("idNome").value;
    cliente.quantidade = parseInt(document.getElementById("idQuantidade").value);

    clientes.push(cliente);
    
    if(validaCampos(cliente))
    {
        addNovaLinhaTabelaClienteGUI(cliente);
        limpaFormularioGUI();
        alert("Cliente cadastrado!");
    }
    else
    { 
        alert("Digite um nome válido!"); 
        addNovaLinhaTabelaClienteGUI(cliente);
        limpaFormularioGUI(); 
    }
}

function addNovaLinhaTabelaClienteGUI(cliente)
{
    let tabela = document.getElementById("idClienteTable");
      
            let linha = tabela.insertRow(cliente.length);

            let colunaSala  = linha.insertCell(0);
            let colunaNome    = linha.insertCell(1);
            let colunaQuantidade = linha.insertCell(2);
            let colBotoes = linha.insertCell(3);
        
            colunaSala.innerHTML = cliente.sala;
            colunaNome.innerHTML = cliente.nome;
            colunaQuantidade.innerHTML = cliente.quantidade;
        
            addBotoesLinhaTableGUI(colBotoes, cliente);
}

function limpaFormularioGUI()
{
    document.getElementById("formCadastro").reset();
}

function addBotoesLinhaTableGUI(colBotoes, cliente)
{
    let btnEditar = document.createElement("button");
    let lblEditar = document.createTextNode("Editar");
    btnEditar.appendChild(lblEditar);
    colBotoes.appendChild(btnEditar);
    btnEditar.className = "btn btn-warning p-2 ml-3";
   
    let btnRemover = document.createElement("button");
    let lblRemover = document.createTextNode("Remover");
    btnRemover.appendChild(lblRemover);
    colBotoes.appendChild(btnRemover);  
    btnRemover.className = "btn btn-danger p-2 ml-3";

    let codigoCliente = cliente.codigo;

    btnEditar.onclick = function() { alert("Editando o cliente da sala: " + codigoCliente);  }
    btnRemover.onclick = function() { alert("Removendo o cliente da sala: " + codigoCliente);  }
}

function validaCampos(cliente)
{
     return /^([a-zA-Zà-úÀ-Ú]|\s+)+$/.test(cliente.nome);
}