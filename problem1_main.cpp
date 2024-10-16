// student needs to write this
#include "include/gen_number.h"
#include "include/post_process.h"
#include "include/print_menu.h"
#include <iostream>

using namespace std;

int main(int argc, char ** argv) {
    srand((unsigned) time(NULL));
    int num;
    int choice;
    // Check if a command line argument was provided and assign it to num using atoi(), else call the random number generator function.
    if (argc > 1) {
        num = atoi(argv[1]);
        
        if (num == 0) {num = generateNum();}
        
    } else{
        num = generateNum();
    }

    cout << "The number is: " << num << endl;
    // Print the value of the number
    
    print_menu()
    // Print the menu and ingest the choice selected by the user
        
        // check for overflow
       
        // check if prime
        
        // check if zero
       
        // call addTen function
        
        // repeat
        
    

	return 0;
}
