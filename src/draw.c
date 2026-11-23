#include <stdio.h>
#include <stdlib.h>

#include "../include/draw.h"



void drawField(int Sx, int Sy){
    system("clear");
    for(int i = 0; i < Sx; i++){
        for(int j = 0; j < Sy; j++){
            printf(" # ");
        }
        printf("\n");
    }
}