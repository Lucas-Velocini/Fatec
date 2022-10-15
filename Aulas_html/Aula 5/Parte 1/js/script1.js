let notas = [10, 7, 9, 2];

console.log(notas[0]);
console.log(notas[1]);
console.log(notas[2]);
console.log(notas[3]);

const itens = document.getElementsByClassName('destaque'); //pela classe
const destaque = document.querySelectorAll('.destaque'); //pela classe e por mais coisas

console.log(itens[0].innerText);
console.log(itens[1].innerText);
console.log(itens[2].innerText);

itens[1].style = "color: blue";

console.log(destaque[0].innerText);
console.log(destaque[1].innerText);
console.log(destaque[2].innerText);

destaque[0].style = "color: green";

console.log(itens);
console.log(destaque);

const repete = document.querySelectorAll('.repeticao');

for(let i=0; i<=10; i++){
    document.write(i + ' ');
}

for(let i=0; i<repete.length; i++){
    repete[i].style="color: blue";
}

const tempoProd = 5;
let tempoDisp = 100;
let produtos = 0;

while(tempoDisp>0){
    tempoDisp = tempoDisp-tempoProd;
    produtos++;
}

console.log(produtos);



document.getElementById('add').addEventListener('click', adicionar);

function adicionar(){
    const lista = document.getElementById('lista');
    const novoLi = document.createElement('li');
    novoLi.innerText = prompt('Digite o novo Item:');
    lista.appendChild(novoLi);
}

function editarItem(elemento){
    elemento.innerText = prompt('Digite um novo valor para o item:');
}

const itemLista = document.querySelectorAll('#lista li');
for(let i=0; i<itemLista.length; i++){
    itemLista[i].addEventListener('click', () => {editarItem(itemLista[i]);});
}
