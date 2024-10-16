// student needs to write this
#include "include/gen_number.h"
#include "include/post_process.h"
#include "include/print_menu.h"
#include <iostream>

using namespace std;

int main(int argc, char ** argv) {
    srand((unsigned) time(NULL));
    int num, choice, exp;
    // Check if a command line argument was provided and assign it to num using atoi(), else call the random number generator function.
    if (argc > 1) {
        num = atoi(argv[1]);
        
        if (num == 0) {num = generateNum();}
        
    } else{
        num = generateNum();
    }

    cout << "The number is: " << num << endl;
    // Print the value of the number
    // Print the menu and ingest the choice selected by the user
    while (true){
        print_menu();
        cin >> choice;
        switch (choice){
            case 1:
                num = doubleNum(num);
                break;
            case 2:
                num = reverseDigit(num);
                break;
            case 3:
                cout << "Enter power (2, 3, or 4): ";
                cin >> exp;
                num = raisePow2_3_4(num, exp);
                break;
            case 4:
                num = sumDigits(num);
                break;
            case 5:
                num = raiseFirstDigitPowSecondDigit(num);
                break;
            case 6:
                num = raiseFirstAndSecondDigitPowThirdDigit(num);
                break;
            case 9:
                return 0;
            default:
                cout << "Invalid choice."<<endl;
                break;
                }

        // check for overflow
        if (num<0){ cout << "Overflow occured!"<<endl; num = generateNum();}
        
        // check if prime   
        if (isNumPrime(num)){
            cout <<num << " is prime"<<endl;
        } else{
            cout <<num << " is not prime"<<endl;}

        // check if zero
        if (num==0){cout<< "The number is now 0. Exiting program."<<endl; break;}
       
        // call addTen function
        if (num <10){num = addTen(num);}

        // repeat
        
    }
        

        
    

	return 0;
}
