//3-Informar um preço de um produto e calcular novo preço com desconto de 9%.
//var preço, desconto, result

//    receber preço

//   desconto = preço % 9

//    result = preço - desconto
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, desc, b = 0;
    printf("O Preco do pao esta: ");
    scanf("%i",&a);

desc = a % 9;
b = a - desc;
    printf("O valor do desconto e: %i\n",b);

system ("PAUSE");
}