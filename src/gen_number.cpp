// complete the function source
#include <iostream>

int generateNum(){
    srand(time(0)); //seed: https://www.digitalocean.com/community/tutorials/random-number-generator-c-plus-plus#importance-of-a-seed-value
    return rand() % 90 + 10;  // creates number between 10 and 99
}

