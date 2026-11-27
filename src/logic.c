#include <stdio.h>
#include <stdlib.h>
#include "../include/logic.h"

void field(int Sx, int Sy, int arr[Sx][Sy]){
    for(int i = 0; i < Sx; i++){
        for(int j = 0; j < Sy; j++){
            arr[i][j] = 10;
        }
    }
}

void inputAscertain(char input[20], int *x, int *y, char *d){
    int cont = 1;
    int i = 0;

    *x = 0;
    *y = 0;
    
    while(input[i] != '\0'){
        if(input[i] == ' '){
            i++;
        }else if(input[i] >= '0' && input[i] <= '9'){
            if(cont == 1){

                while(input[i] >= '0' && input[i] <= '9'){
                    *x = *x * 10 + (input[i] - '0');
                    i++;
                }
                cont++;
            }else if(cont == 2){
                while(input[i] >= '0' && input[i] <= 9){
                    *y = *y * 10 + (input[i] - '0');
                    i++;
                }
                cont++;
            }
        }else {
            *d = input[i];
            i++;
        }
    }
}

void fieldModify(int x, int y, char d, int Sx, int Sy, int field[Sx][Sy]) {
    if (x < 0 || x >= Sx || y < 0 || y >= Sy) {
        return;
    }

    if (d == 'b') {
        field[x][y] = 11;
    } else if (d == 'd') {
        field[x][y] = 0;
    } else {
        // Tratamento de erro humano pro futuro
    }
}
void fieldFill(int Sx, int Sy, int fieldAlt[Sx][Sy], int x, int y){
    int bombsPlaced = 0;
    for(int i = 0; i< Sx; i++){
        for(int j = 0; j < Sy; j++){
            if (i == x && j == y) {
                fieldAlt[i][j] = 0; // posição inicial segura
                printf(" %d ", fieldAlt[i][j]);
            } else if ((rand() % 100) < 15) { // ~15% de chance de bomba
                fieldAlt[i][j] = -1;
                bombsPlaced++;
                printf(" %d ", fieldAlt[i][j]);
            } else {
                fieldAlt[i][j] = 0;
                printf(" %d ", fieldAlt[i][j]);
            }
        }
        printf("\n");
    }
}