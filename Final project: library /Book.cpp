#include <iostream>
#include <string>

using namespace std;

#include "Book.h"




Book::Book(int y, string t, string a) : information(y, t) {
	author = a;
}



void Book::display() {
	std::cout << "[Book] ";
	information::display();
	std::cout << ", Author: " << author << "\n";

}
