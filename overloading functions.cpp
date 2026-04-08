/** Assignment:
Write a program that computes and displays the charges for a patient’s hospital stay. First, the program should ask if the patient was admitted as an inpatient or an outpatient.

If the patient was an inpatient, the following data should be entered:

The number of days spent in the hospital
The daily rate
Hospital medication charges
Charges for hospital services (lab tests, etc.)

The program should ask for the following data if the patient was an outpatient:

Charges for hospital services (lab tests, etc.)
Hospital medication charges

The program must use two overloaded functions (functions that have the same name but different parameters) to calculate the total charges.
One of the functions should accept arguments for the inpatient data, while the other function accepts arguments for outpatient information. Both functions should return the total charges.
**/



#include <iostream>
#include <vector>
#include <iomanip>
#include <string>


// inpatient version
double charges(int days, double dailyrate, double medchanges, double servicesCharges) {
	return days * dailyrate + medchanges + servicesCharges;
}

// outpatient version
double charges(double services, double medication) {
	return services + medication;

}


int main() {

	


	char choice;
	std::cout << " Was the patient an inpatient or outpatient? Enter 'I' for inpatient or 'O' for outpatient: ";
	std::cin >> choice;


	if (choice == 'I' || choice == 'i') {
		int days;
		double dailyrate;
		double medchanges;
		double serviceCharges;


		std::cout << "Enter the Number of days spent in the hospital: ";
		std::cin >> days;
		std::cout << "Daily rate: ";
		std::cin >> dailyrate;
		std::cout << "Hospital medication charges: ";
		std::cin >> medchanges;
		std::cout << "Charges for hospital services (lat tests, etc.): ";
		std::cin >> serviceCharges;



		double total = charges(days, dailyrate, medchanges, serviceCharges);
		std::cout << "\nTotal charges for inpatient: $" << total << '\n';
	}
	else if (choice == 'O' || choice == 'o') {
		double medChanges;
		double serviceCharges;


		std::cout << "Hospital medication charges: ";
		std::cin >> medChanges;
		std::cout << "Charges for hospital services (lab tests, etc.): ";
		std::cin >> serviceCharges;

		double total = charges(medChanges, serviceCharges);
		std::cout << "\nTotal charges for outpatient: $" << total << '\n';
	}
	else {
		std::cout << "Invalid selection. Please run the program again and enter 'I' or 'O'.\n";
	}





	return 0;


}
