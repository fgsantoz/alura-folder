#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "");
    
    // imprime o cabeçalho do nosso jogo
    printf("********************************************\n");
    printf("* Bem vindo ao nosso Jogo de Adivinhação *\n");
    printf("********************************************\n");

    int numerosecreto = 42;

    int chute;
    // printf ("O número %d é o secreto. Não conte para ninguém!\n", numerosecreto);
    printf ("Qual é o seu chute? ");
    scanf ("%d", &chute);
    printf ("Seu chute foi %d\n", chute);

    if(chute == numerosecreto){
        printf ("Parabéns. Você acertou!\n");
        printf ("Jogue novamente, você é um bom jogador!\n");
    }
    else{
        if(chute > numerosecreto){
            printf ("Seu chute foi maior que o número secreto!\n");
        }
         if(chute < numerosecreto){
            printf ("Seu chute foi menor que o número secreto!\n");
        }        
    }
    
}