/* 4-Cálculo de um salário líquido de um professor. Serão fornecidos valor da hora aula, número de aulas dadas e o % de desconto do INSS.

var valor da hora, numero de aulas, salario bruto,INSS, salario liquido

valor da hora * numero de aulas = salario bruto

salario bruto % INSS

imprimir salario liquido


7,5% para até um salário mínimo (R$1.100);
9% para salários entre R$ 1.100,01 e R$ 2.203,48
12% para salários entre R$ 2.203,49 e R$ 3.305,22
14% para salários entre R$ 3.305,23 e R$ 6.433,57 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int vh, na, sb, INSS, sl = 0;
    printf("Por favor, diga o horario de trabalho: ");
    scanf("%i",&vh);

    printf("Por favor, diga o numero de aulas: ");
    scanf("%i",&na);

sb = vh * na;

if (sb <= 1100)
    INSS = sb % 7,5;

if (sb >= 1100 <= 2203)
    INSS = sb % 9;

if (sb >= 2204 <= 3305)
    INSS = sb % 12;

if (sb >= 3306 <= 6433)
    INSS = sb % 14;

sl = sb % INSS;

printf("\nO salario bruto do professor e de: %i\n",sb);
printf("O salario liquido deste professor e de: %i\n\n",sl);
system("PAUSE");
}

