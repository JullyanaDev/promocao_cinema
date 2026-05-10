//**Cenário:** Um cinema dá desconto baseado na idade ou no dia da semana.
//**Desafio:** O preço da entrada é R$ 20,00. Leia a idade do cliente e um número representando o dia da semana (1 para Segunda, 2 para Terça, etc.).

//- O desconto de 50% é aplicado se o cliente tiver menos de 12 anos **OU** mais de 65 anos.
//- O desconto também é aplicado se o dia da semana for Terça-feira (2).
//**Requisito:** Calcule o valor final a pagar e aplique a lógica de decisão para modificar o valor se as condições forem atendidas.

#include <stdio.h>
#include  <stdlib.h>

int main () {
   int val_entrada = 20;
   int desconto = val_entrada/ 2;
   int idade_cliente;
   int dia_semana;

   printf("Informe sua idade: ");
   scanf("%i",&idade_cliente);
   printf("1-Segunda | 2-Terca | 3-Quarta | 4-Quinta | 5-Sexta | 6-Sabado | 7-Domingo \n");
   printf("Informe o numero que condiz com o dia da semana: ");
   scanf("%i",&dia_semana);

   if(idade_cliente < 12 || idade_cliente > 65){
        printf("Voce recebeu um desconto pela sua idade, o valor que voce ira pagar sera %i", desconto);

   } else if (dia_semana == 2){
        printf("Vc recebeu por ser Terca-Feira, Vc ira pagar %i",desconto);

   } else{
        printf("Vc ira pagar %i",val_entrada);
   }
   return 0;

}

