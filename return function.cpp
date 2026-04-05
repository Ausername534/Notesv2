/** Assignment: Return Value Function
Write a return function called averageFourTemperatures that accepts 4 integers in the parameter list, returns the average.

In the main function prompt the user for 4 temperatures and them in separate appropriately named variables.

Call the averageFourTemperatures, passing values and printing the returned average to the console. 
**/

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;


double averageFourTemperatures(int t1, int t2, int t3, int t4) {
	return (t1 + t2 + t3 + t4) / 4.0;
}



int main() {



	int tem1, tem2, tem3, tem4;

	cout << "Enter temperature 1: ";
	cin >> tem1;
	cout << "Enter temperature 2: ";
	cin >> tem2;
	cout << "Enter temperature 3: ";
	cin >> tem3;
	cout << "Enter temperature 4: ";
	cin >> tem4;

	double result = averageFourTemperatures(tem1, tem2, tem3, tem4);

	cout << "\nThe average of the four temperatures is " << result << endl;

	return 0;


}
