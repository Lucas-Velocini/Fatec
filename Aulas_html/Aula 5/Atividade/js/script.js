function adicionar(){
    const qtd = prompt('Digite a quantidade de clientes a serem adicionados: ');

    for(let i=0; i<qtd; i++){
        const nome = prompt('Digite o nome do cliente: ');
        const email = prompt('Digite o e-mail do cliente: ');
        const telefone = prompt('Digite o telefone do cliente: ');

        const tabela = document.getElementById('tabela');
        const tr = document.createElement('tr');
        const tdNome = document.createElement('td');
        tdNome.innerText = nome;
        tdNome.className = "novo" ;
        const tdEmail = document.createElement('td');
        tdEmail.innerText = email;
        tdEmail.className = "novo";
        const tdTelefone = document.createElement('td');
        tdTelefone.innerText = telefone;
        tdTelefone.className = "novo";

        tr.appendChild(tdNome);
        tr.appendChild(tdEmail);
        tr.appendChild(tdTelefone);

        tabela.appendChild(tr);
    }
    const campoNovo = document.getElementsByClassName('novo');
    for(let i=0; i<campoNovo.length; i++){
        if(campoNovo[i].id != 'comEvento'){
    campoNovo[i].addEventListener('click', () => {editarItem(campoNovo[i]);});
    campoNovo[i].id = 'comEvento';
        }
    } 
}

document.getElementById('btnAdd').addEventListener('click', adicionar);

function editarItem(elemento){
    elemento.innerText = prompt('Digite um novo valor para o campo: ');
}