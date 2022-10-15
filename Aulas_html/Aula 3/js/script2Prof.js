const a = 10;
const b = 20;

const resultado = a * b; /* +, -, /, * */

if(resultado == 200){
    // Escrevendo na tela
    document.write(resultado);
} 
else if(resultado == 300){
    document.write(resultado + "!!!");
}
else {
    document.write('Teste');
}

// salario, aumento e novoSalario

const salario = prompt('Digite o valor do salário');
const aumento = prompt('Digite a % de aumento');
const valorAumento = salario * (aumento/100);
const novoSalario = valorAumento + Number(salario);

// const novoSalario = salario * (1 + aumento/100)

console.log(novoSalario);