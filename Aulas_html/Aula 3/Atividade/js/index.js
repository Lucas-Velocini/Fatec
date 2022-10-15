const salario = prompt('Digite o salario atual:');
const aumento = prompt('Digite a porcentagem de aumento:');

let salario_novo = salario * ((100+Number(aumento))/100);

alert("O salario novo é " + salario_novo);

/*document.write("Salário antigo = " + salario);
document.write("Porcentagem de aumento = " + aumento + "%");*/

document.write("O valor do salário novo é " + salario_novo);

console.log("O valor do salário novo é " + salario_novo);