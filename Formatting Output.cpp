/** Assignment:
Write a program that repeatedly asks for the principal, the interest rate (Rate), and the number of times (T) the interest is compounded and outputs the amount in savings. Use the following formula.

Amount in Savings = Principal * (1 + Rate/T)T

Note that you can compute something raised to a power, for example, baseexponent using:

#include < math.h >
...
pow(base, exponent);

Also note that rate is input as a percent, but the formula assumes it is between 0 and 1, so divide the percent by 100.

The output need to be in this format:
Enter principal: 1000
Enter interest rate (as percent): 4.25
Enter number of times compounded: 12

Interest Rate:           4.25%
Times Compounded:           12
Principal:         $   1000.00
Amount in Savings: $   1043.34

**/

#include <vector>
#include <iomanip>
#include <string>
#include <iostream>
#include <cmath>
using namespace std;



int main() {

	

	double Amount;
	double principal;
	double rate;
	double time;
	double newrate;
	

	Amount = 0;

	std::cout << "Enter prinipal: ";
	std::cin >> principal;

	std::cout << "Enter interest rate (as percent):  ";
	std::cin >> rate;
	
	std::cout << "Enter number of times compouned: ";
	std::cin >> time;

	newrate = rate / 100;

	Amount = principal * pow((1 + newrate / time), time);
	
	std::cout << fixed << setprecision(2);

	std::cout << "Interest Rate:          " << rate << "%" << "\n";
	std::cout << "Times Compounded:       " << time << "\n";
	std::cout << "Principal:        $ " << principal << "\n";
	std::cout << "Amount in Saving: $ " << Amount << "\n";


	std::cout << Amount;



	return 0;

}
