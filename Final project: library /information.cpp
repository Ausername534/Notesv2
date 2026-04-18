#include <iostream>
#include <string>

using namespace std;

#include "information.h"



information::information(int y, string t) {
	year = y;
	title = t;

}



void information::display() {
	std::cout << "Title: " << title << ", Year: " << year;

}


information::~information() {}
