#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "mylib/mylib.h"

#define LOWER 1
#define UPPER 5

int generateRandomInt(int lower, int upper){
    return (rand() % (upper-lower+1)) + lower;
}

void initMat(int* M, int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            M[N*i+j] = generateRandomInt(LOWER,UPPER);
        }
    }
}

void initVec(int* v, int N){
    for(int i=0; i<N; i++){
        v[i] = generateRandomInt(LOWER,UPPER);
    }
}

int main(void) {
    srand(time(0));

    int N = 1500;

    int* M = (int *) malloc(N*N*sizeof(int));
    int* v = (int *) malloc(N*sizeof(int));
    int* Mv = (int *) malloc(N*sizeof(int));

    initMat(M, N);
    initVec(v, N);

    float startTime = (float)clock()/CLOCKS_PER_SEC;
    matVecMult(M, v, Mv, N);
    float endTime  = (float)clock()/CLOCKS_PER_SEC;

    double timeTaken = endTime - startTime;

    printf("Time elapsed with N = %d is %f s\n", N, timeTaken);

    return 0;
}
