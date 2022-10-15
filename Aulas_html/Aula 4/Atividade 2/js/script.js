const n1 = document.getElementById('n1');
const n2 = document.getElementById('n2');
const opcao = document.getElementById('operacao');
let total = 0;

const btnCalcular = document.getElementById('btnCalcular');

function exibirResultado(){
    document.getElementById('resultado').innerText = 'O Resultado é ' + total + '!';
}

function calcular(){
    if(opcao.value == 1){
        total = Number(n1.value)+Number(n2.value);
        exibirResultado();
    }
    if(opcao.value == 2){
        total = Number(n1.value)-Number(n2.value);
        exibirResultado();
    }
    if(opcao.value == 3){
        total = Number(n1.value)*Number(n2.value);
        exibirResultado();
    }
    if(opcao.value == 4){
        total = Number(n1.value)/Number(n2.value);
        exibirResultado();
    }
}

function verificar(){
    if(n1.value == '' || n2.value == ''){
        alert('Preencha todos os campos!');
    }
    if(isNaN(n1.value)||isNaN(n2.value)){
        alert('Por favor, digite apenas números.');
    }
    else{
        console.log('Calculo Realizado!');
    }
}

btnCalcular.addEventListener('click', calcular);
btnCalcular.addEventListener('click', verificar);