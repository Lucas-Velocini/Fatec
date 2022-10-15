// let notas = [10,7,9,2];
// console.log(notas[1]);

const destaques = document.getElementsByClassName('destaque'); // pelo nome da classe
const destaquesDois = document.querySelectorAll('li.destaque'); // tem mais opções
console.log(destaques);
console.log(destaquesDois);

// início, fim e o incremento
for (let i = 1; i <= 10; i++) {
    document.write(i);
}

for(let i = 0; i < destaques.length; i++){
    destaques[i].style="color: blue";
}

const tempoProducao = 5;
let tempoDisponivel = 100;
let produtos = 0;

while(tempoDisponivel > 0){
    tempoDisponivel = tempoDisponivel - tempoProducao;
    produtos++;
}

console.log(produtos);

function adicionar(){
    const lista = document.getElementById('lista');
    const novoLi = document.createElement('li');
    novoLi.style = "color: green";
    novoLi.innerText = prompt('Digite o item');
    lista.appendChild(novoLi);
}

document.getElementById('add').addEventListener('click',adicionar);