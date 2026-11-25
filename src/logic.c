#include "../include/logic.h"

void field(int Sx, int Sy, int arr[Sx][Sy]){
    for(int i = 0; i < Sx; i++){
        for(int j = 0; j < Sy; j++){
            arr[i][j] = 10;
        }
    }
}

void inputModify(int Sx, int Sy, int arr[Sx][Sy], char resp){
    // if(Sx < )
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