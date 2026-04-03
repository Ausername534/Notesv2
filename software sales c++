#include <iostream>
using namespace std;

int main() {

	double package;
	int units;
	double Discount;
	double total;

	package = 99;
	std::cout << "how many units do you want to buy? ";
	std::cin >> units;

	if (units <= 9) {
		std::cout << "You bought " << units << " No discount" << endl;
		total = units * package;
		std::cout << "Your total is: $" << total;
	}
	else if ((units >= 10) && (units <= 19)) {
		std::cout << "You bought " << units << endl;
		std::cout << "Your discount is 20%" << endl;
		total = units * package;
		Discount = total * 0.20;
		total = total - Discount;
		std::cout << "Your total is: $" << total;
	}
	else if ((units >= 20) && (units <= 49)) {
		std::cout << "You bought " << units << endl;
		std::cout << "Your discount is 30%" << endl;
		total = units * package;
		Discount = total * 0.30;
		total = total - Discount;
		std::cout << "Your total is: $" << total;
	}
	else if ((units >= 50) && (units <= 99)) {
		std::cout << "You bought " << units << endl;
		std::cout << "Your discount is 40%" << endl;
		total = units * package;
		Discount = total * 0.40;
		total = total - Discount;
		std::cout << "Your total is: $" << total;
	}
	else {
		std::cout << "You bought " << units << endl;
		std::cout << "Your discount is 50" << endl;
		total = units * package;
		Discount = total * 0.50;
		total = total - Discount;
		std::cout << "Your total is: $" << total;
	}

	return 0;


}
