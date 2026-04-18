#include "Movie.h"
#include <iostream>


using namespace std;


Movie::Movie(int y, string t, string d) : information(y, t) {
	director = d;
}



void Movie::display() {
	std::cout << "[Movie] ";
	information::display();
	std::cout << ", Director: " << director << "\n";

}
