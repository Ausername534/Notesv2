/** Assignment:
Complete the following program. You may only add code to the TODO comment and commented lines at the top with name, date
**/

 

#include <iostream>
using namespace std;

int main() {
    float price1;
    float price2;

    // input prices from the user
    cout << "Enter id 1: ";
    cin >> price1;
    cout << "Enter id 2: ";
    cin >> price2;

    float* pricePtr;

    /* TODO: Your solution goes here.
       Update pricePtr so the output is correct.
       Do not change anything else. */

    // output message to the user
    if (pricePtr == nullptr) {
        cout << "The prices are the same." << endl;
    } else {
        cout << "The largest price is " << *pricePtr << "." << endl;
    }
}




// MINES:
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;



int main() {
    float price1;
    float price2;

    // input prices from the user
    std::cout << "Enter id 1: ";
    std::cin >> price1;
    std::cout << "Enter id 2: ";
    std::cin >> price2;


    float* pricePtr;



    /* TODO: Your solution goes here.
       Update pricePtr so the output is correct.
       Do not change anything else. */





       // output message to the user
    if (price1 == price2) {
        cout << "The prices are the same." << endl;
        pricePtr = nullptr;
    }
    else  if (price1 > price2) {
        pricePtr = &price1;
        cout << "The largest price is " << *pricePtr << "." << endl;
    }
    else {
        pricePtr = &price2;
    }
}


