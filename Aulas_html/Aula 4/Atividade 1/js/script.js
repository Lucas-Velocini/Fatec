const nome = document.getElementById('nome');
const email = document.getElementById('email');
const senha = document.getElementById('senha');
const telefone = document.getElementById('telefone');

const btnEnviar = document.getElementById('btnEnviar');

function verificar(){
    if(nome.value != '' && email.value != '' && senha.value != '' && telefone.value != ''){
        alert('Enviado com sucesso!');
    }
    else{
        alert('Preencha todos os campos!');
    }
}

btnEnviar.addEventListener('click', verificar);
