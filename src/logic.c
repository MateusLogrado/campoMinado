#include "../include/logic.h"

void field(int Sx, int Sy, int arr[Sx][Sy]){
    for(int i = 0; i < Sx; i++){
        for(int j = 0; j < Sy; j++){
            arr[i][j] = 10;
        }
    }
}