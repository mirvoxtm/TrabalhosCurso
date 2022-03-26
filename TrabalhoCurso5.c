//5 - Ler uma temperatura em graus Celsius e transformá-la em graus Fahrenheit.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = 0;
    printf("Insira uma temperatura em Celsius (C): ");
    scanf("%i",&c);

int f = c * 9 /5 + 32;

    printf("Esta temperatura e igual a: %iF\n",f);
    system("PAUSE");
}