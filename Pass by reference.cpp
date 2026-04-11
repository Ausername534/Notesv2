/** Assignment:
Write a function that inputs a person's first and last name. 
A function can't return two strings, so instead you will need to pass the arguments as pointers or by reference. 
Call the function and output the first and last name in main.
**/

#include <iostream>
#include <string>

void Getname(std::string& FirstName, std::string& LastName) {
    std::cout << "Firstname: ";
    std::cin >> FirstName;
    std::cout << "LastName: ";
    std::cin >> LastName;
}


#include <iostream>

int main() {
    std::string FirstName;
    std::string LastName;

    Getname(FirstName, LastName);

    std::cout << "FirstName: " << FirstName << "\n";
    std::cout << "LastName: " << LastName << "\n";




    return 0;
}
