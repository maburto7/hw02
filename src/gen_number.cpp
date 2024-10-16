// complete the function source
#include <iostream>
using namespace std;
int generateNum(){
    srand(time(0)); //seed: https://www.digitalocean.com/community/tutorials/random-number-generator-c-plus-plus#importance-of-a-seed-value
    return rand() % 90 + 10;  // creates number between 10 and 99
}


int doubleNum(int num){
    return num + num;
}


int reverseDigit(int num){
    int reversed = 0, last_digit;

    while (num!=0){
        last_digit = num %10;
        reversed = reversed * 10 + last_digit;
        num /= 10; //remove the last digit
    }
    return reversed;
}

int sumDigits(int num){
    int sum = 0, single_digit;
    while(num!=0){
       single_digit = num % 10;
       sum += single_digit;
       num /=10; 
    }
    return sum;
}
int raisePow2_3_4(int num, int exp){
    return pow(num, exp);
}

int raiseFirstDigitPowSecondDigit(int num){
    //TODO ADD ERROR THAT LESS THAN 10 FIGITS CANNOT ADD NUMBEEERS
    if (to_string(num).length() == 2 ){
        int temp_num = num;
        int first_digit = floor(temp_num/10);
        int second_digit = floor(num%=10);
        
        return pow(first_digit, second_digit);
        
    } else {
        cout << "The number must be two digits in length."<<endl;
        return num;
    }  
}

int raiseFirstAndSecondDigitPowThirdDigit(int num){
    if (to_string(num).length() == 3 ){
        int temp_num = num;
        int third_digit = floor(temp_num %= 10);
        int first_second_digit = floor(num/10);

        return pow(first_second_digit, third_digit);

    } else{
        cout << "The number must be three digits in length."<<endl;
        return num; }
}