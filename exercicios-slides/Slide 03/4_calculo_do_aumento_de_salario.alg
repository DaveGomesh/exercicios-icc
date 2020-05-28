algoritmo "cálculo do aumento de salário"
//Desenvolvido no VisuAlg 2.0
// Seção de Declarações 
var
   salario, aumento, novo_salario: real
inicio
// Seção de Comandos
   // entrada de dados
   leia(salario)
   //processamento
   aumento <- salario * (25/100);
   novo_salario <- salario + aumento
   //saída de dados
   escreval(novo_salario)
fimalgoritmo
