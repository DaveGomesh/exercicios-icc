algoritmo "calcula novo salário"
//Desenvolvido no VisuAlg 2.0
// Seção de Declarações 
var
   salario, aumento, novo_salario , perc: real
inicio
// Seção de Comandos 
   leia(salario, perc)
   aumento <- salario * (perc / 100)
   novo_salario <- salario + aumento
   escreval(novo_salario , aumento)
fimalgoritmo
