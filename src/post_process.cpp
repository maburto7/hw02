// complete the source code
#include "post_process.h"

bool isNumPrime(int num){
    if (num <= 1){
        return false;
    }

    for (int i=2; i < num; i++){
        if (num%i==0){
            return false;
        }
    }
    return true;
}

int addTen(int num){
    return num + 10;
}