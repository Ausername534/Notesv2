/**Assignment:
Write a program to input temperatures for any number of days and then output to average of the even days. You must:

Create a vector of doubles called temperatures.
Use a loop to 
Prompt the user for temperatures.
Add them to the vector.
Have some way for the user to indicate when they want to stop entering temperatures.
Use a second loop to find the sum of the temperatures on even days (the even index temperatures are 0, 2, 4, 6, etc.).
Print the average of the even day temperatures showing only two decimals of precision
**/


#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {


	std::vector<double> temperatures;
	double userinput;
	string choice;
	
	// A loop to prompt the user for temperatures
		while (true) {
			std::cout << "Enter a temperature: ";
			std::cin >> userinput;

			temperatures.push_back(userinput);

			// user can stop the loop or continue adding
			std::cout << "Add another temperature?? (yes/no): ";
			std::cin >> choice;
			if (choice == "no" || choice == "NO") {
				break;
			}
		}

	double sum = 0.0;
	int count = 0;
	# will find the the sum of even-day tempeatures
	for (int i = 0; i < temperatures.size(); i++) {
		if (i % 2 == 0) {
			sum += temperatures[i];
			count++;
		}
	}

	# print the average with 2 decimals of precision ex: 53.5
	if (count > 0) {
		double average = sum / count;
		std::cout << "\nAverage of tempeatures on even days: ";
		std::cout << std::fixed << std::setprecision(2) << average << std::endl;
	}
	else {
		std::cout << "No temperatures were recorded." << std::endl;
	}

	return 0;


}
