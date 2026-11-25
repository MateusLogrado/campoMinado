#include "../include/logic.h"

void field(int Sx, int Sy, int arr[Sx][Sy]){
    for(int i = 0; i < Sx; i++){
        for(int j = 0; j < Sy; j++){
            arr[i][j] = 10;
        }
    }
}

int inputModify(int Sx, int Sy, int arr[Sx][Sy], char resp){
    if(Sx < )
    for(int i = 0; i < Sx; i++){
        for(int j = 0; j < Sy; j++){
            arr[i][j] = 10;
        }
    }
}

void inputAscertain(char input[4], int *x, int *y, char *d){
    for(int i = 0; input[4] != '\0'; i++){
        if(i == 1){
            *x = input[i] - '0';
        }else if(i == 2){
            *y = input[i] - '0';
        }else if(i == 3){
            *d = input[i];
        }
    }
}