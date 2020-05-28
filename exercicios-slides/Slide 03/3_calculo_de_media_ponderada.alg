algoritmo "cálculo de média ponderada"
//Desenvolvido no VisuAlg 2.0
// Seção de Declarações 
var
   p1, p2, p3, n1, n2, n3, media_pond: real
inicio
// Seção de Comandos 
   leia(p1, p2, p3, n1, n2, n3)
   media_pond <- (n1*p1 + n2 * p2 + n3 *p3) / (p1 + p2 + p3)
   escreval(media_pond)
fimalgoritmo
