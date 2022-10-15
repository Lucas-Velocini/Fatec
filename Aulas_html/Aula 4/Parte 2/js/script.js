const texto = document.getElementById('texto');

texto.innerText = "Loja Aberta";
texto.style = "background-color: green";

function mudar(){
    if(texto.innerText == "Loja Aberta"){
        texto.innerText = "Loja Fechada";
        texto.style = "background-color: red";
    } else {
        texto.innerText = "Loja Aberta";
        texto.style = "background-color: green";                
    }
}