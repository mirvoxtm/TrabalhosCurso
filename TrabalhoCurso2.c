/*
2.	Receber um valor qualquer do teclado e imprimir esse valor, dps envie a % q voce quer desse numero
e depois printar o numero enviado, porcentagem que o usuario deseja, resultado dessa porcentagem e o reajuste.


variaveis necessarias: 

numero q o usuario ira enviar 
porcentagem que o usuario ira enviar
resultado dessa porcentagem (calculo para obter numero enviado / 100 x a porcentagem desejada)
resultado do numero desejado mais o resultado da porcentagem q seria o reajuste

print tudo isso

*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //Vars
    int a, b, c, d = 0;

    printf("Por favor, digite um numero: ");
    scanf("%i",&a);
    printf("Por favor, digite a porcentagem: ");
    scanf("%i",&b);

c = a / 100 * b;
d = a + c;

    printf("O Numero que você digitou foi: %i\n",a);
    printf("O Numero da Porcentagem que você deu foi: %i\n",b);
    printf("O Resultado desta porcentagem foi: %i\n",c);
    printf("O valor do Reajuste e de: %i\n\n",d);

system ("PAUSE");
}