const nome = document.getElementById('nome');
const email = document.getElementById('email');
const telefone = document.getElementById('telefone');
const mudanca = document.getElementById('mudanca');


function formulario(campo, msg){
    campo.value = prompt(msg);
    if(campo.value == ''){
        campo.value = 'Não Informado';
    }
}

formulario(nome, 'Informe o seu nome: ');
formulario(email, 'Informe o seu email: ');
formulario(telefone, 'Informe o seu telefone: ');


function limpar(){
    nome.value = '';
    email.value = '';
    telefone.value = '';
    mudanca.value = '';
}

function verificar(){
    console.log('Alteração feita!');
}