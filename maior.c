#include "stdio.h"


int max(int vec[], int len, int step, int vmax){
    if(step > len - 1)
        return vmax;

    printf("%d ", vec[step]);

    return max (vec, len, ++step, vec[step] > vmax ? vec[step]: vmax);
}

int main(){
    int vec[] = {1, 5, 2, 7, 6, 4};

    int len = sizeof(vec) / sizeof(int);

    int res = max(vec, len, 0, vec[0]);

    printf("\n%d\n", res);


    

}
