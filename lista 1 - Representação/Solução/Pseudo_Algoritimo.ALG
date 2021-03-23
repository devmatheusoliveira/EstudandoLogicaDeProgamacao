Algoritmo "calculo de imc"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Informa se a pessoa está acima do peso com base no IMC
// Autor(a)    : Matheus Santos Oliveira
// Data atual  : 24/02/2021
Var
indiceDeMassaCorporea, altura, peso : real

Inicio

   escreval("Por favor informe o peso da pessoa: ")
   leia(peso)
   escreval("Ótimo!")
   escreval("Agora, me diz a altura: ")
   leia(altura)
   
   indiceDeMassaCorporea <- peso/(altura*altura)
   
   escreva("Seu Índice de Massa Corpórea é de: ")
   escreval(indiceDeMassaCorporea)
   
   se indiceDeMassaCorporea > 30 entao
      escreval("Esta pessoa está acima do peso")
      escreval("Recomedamos uma atividade física e alimentação balanceada")
   senao
        escreval("Esta pessoa está no peso ideal")
   fimse

Fimalgoritmo