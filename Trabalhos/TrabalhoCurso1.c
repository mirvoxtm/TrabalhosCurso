#include <stdio.h>
#include <stdlib.h>

//1) Com printf peça para o usuário enviar um número e apenas permitir q o primeiro número seja maior que o próximo número 
//caso seja maior reinicie o processo, após isso peça para enviar o próximo número e diga o envie o intervalo


void main()
{
    //Variáveis
    int x=0;
    int y=0;
    int res;
    
        printf("Por Favor, digite um numero (Este numero precisa ser maior): ");
        scanf(" %i", &x); //Regista a primeira variavel X
        printf("Certo, agora digite outro numero: ");
        scanf("%i", &y); //Registra a segunda variavel Y}

    //Enquanto Y for menor que X - Isso efetivamente responde a pergunta
    //até os requerimentos serem aceitos 
    while (y > x)
    {            
        printf("Este numero e maior que o seu primeiro!\nPor Favor, digite um numero (Este numero precisa ser maior): ");
        scanf(" %i", &x); //Regista a primeira variavel X
        printf("Certo, agora digite outro numero: ");
        scanf("%i", &y); //Registra a segunda variavel Y}
    }

    //Se X for maior que Y
    res = y; //Transforma a Váriavel Resultado em Y
    printf("Certo! Os Intervalos deste numero sao: \n"); //Print do Intervalo

    while (res <= x)
    {
        printf("%i\n", res);
        res++;
            }
}