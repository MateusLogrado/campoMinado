#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "include/draw.h"
#include "include/logic.h"

void clearEnter(){
    int c;
    while((c = getchar()) != '\n' && c != EOF){
        
    }
}

int main(){
    
    const int Sx = 9;
    const int Sy = 9;
    int campo[Sx][Sy];
    field(Sx, Sy, campo);
    char input[20];
    int x = 0;
    int y = 0;
    char d;
    
    bool prog = true;
    bool inGame = false;
    int resp = 0;
    
    
    while(prog){

        if(inGame){

          drawField(Sx, Sy, campo);
          if(fgets(input, sizeof(input), stdin) != NULL){
              input[strcspn(input, "\n")] = '\0';
              inputAscertain(input, &x, &y, &d);
          }
          fieldModify(x, y, d, Sx, Sy, campo);
          
          
        }else{
            printf("============================\n");
            printf("||      Campo Minado      ||\n");
            printf("============================\n");
            printf("O que deseja fazer?\n");
            printf("1 - Jogar\n");
            printf("2 - Instruções\n");
            printf("0 - sair do jogo\n");
            scanf("%d", &resp);

            switch(resp) {
                case 1:
                    system("clear");
                    inGame = true;
                    break;
                case 2:
                    system("clear");
                    printf("a maneira facil de entender como funciona os comandos aqui \n");
                    printf("você ira digitar tudo junto, exemplo: você digitou '3 4 b' \n");
                    printf("o primeiro digito é 3 que é o eixo X \n");
                    printf("o segundo digito é 4 que é o eixo Y \n");
                    printf("b = é a ação, sendo 'b' uma bandeira para marcar a bomba e 'd' para descobrir, podendo ser a bomba ou uma area sem bomba \n");

                    clearEnter();
                    
                    printf("Pressione Enter para continuar...");
                    getchar();
                    break;
                case 0:
                    printf("\n");
                    prog = false;
                    break;
                default:
                    printf("Numero invalido");
                    break;
            }   
        }
    }
}