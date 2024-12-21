#include "AKA.h"

int rekursif(int angka, int N){
    if(N == 0){
        return 0;
    } else if(angka % N == 0){
        return N + rekursif(angka,N-1);
    } else {
        return rekursif(angka,N-1);
    }
}

int iteratif(int angka){
    int total = 0;
    int N;
    for(N=angka-1;N>=1;N--){
        if(angka % N == 0){
            total+=N;
        }
    }
    return total;
}
