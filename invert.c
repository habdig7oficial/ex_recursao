#include "stdio.h"


void invert(int vec[], int len, int step){
    if (step >= len / 2)
        return;

    int aux = vec[step];
    vec[step] = vec[(len - 1) - step];
    vec[(len - 1) - step] = aux;
    invert(vec, len, step + 1);
}

int main(){
    int vec[] = {1, 5, 2, 7, 6, 4};

    int len = sizeof(vec) / sizeof(int);

    invert(vec, len, 0);

    for (int i = 0; i < len; i++){
        printf("%d ", vec[i]);
    }
    

}
