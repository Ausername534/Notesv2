
#include <vector>
#include <iomanip>
#include <string>
#include <iostream>
#include <cmath>
#include <fstream>
#include <memory>


#include "Book.h"
#include "Movie.h"


using namespace std;


void showMenu() {
	std::cout << "\nMain Menu:\n";
	std::cout << "1. Add item\n";
	std::cout << "2. Remove item\n";
	std::cout << "3. Display all items\n";
	std::cout << "4. Exit\n";
	std::cout << "Select an option: ";

}


void showAddMenu() {
	std::cout << "\nAdd Item Menu:\n";
	std::cout << "1. Add Book\n";
	std::cout << "2. Add Movie\n";
	std::cout << "Select an option: ";
}




int main() {
	vector<shared_ptr<information>> inventory;

	int c;

	do {
		showMenu();
		cin >> c;

		if (c == 1) {
			showAddMenu();
			int type;
			cin >> type;

			string title;
			int year;

			std::cout << "Enter title: ";
			cin.ignore();
			getline(cin, title);


			std::cout << "Enter year: ";
			cin >> year;

			if (type == 1) {

				string author;
				std::cout << "Enter author: ";
				cin.ignore();
				getline(cin, author);


				inventory.push_back(make_shared<Book>(year, title, author));
			}
			else if (type == 2) {
				string director;
				std::cout << "Enter director: ";
				cin.ignore();
				getline(cin, director);

				inventory.push_back(make_shared<Movie>(year, title, director));


			}

		}
		else if (c == 2) {


			int index;

			cout << "Enter index of item to remove: ";
			cin >> index;

			if (index >= 0 && index < inventory.size()) {
				inventory.erase(inventory.begin() + index);
				std::cout << "Item removed.\n";

			}
			else {
				std::cout << "Invalid index.\n";
			}
		}
		else if (c == 3) {
			std::cout << "\nDisplaying all items:\n";

			for (int i = 0; i < inventory.size(); i++) {
				std::cout << i << ": ";
				inventory[i]->display();
			}

			if (inventory.empty()) {
				std::cout << "Inventory is empty.\n";
			}



		}


	} while (c != 4);







	return 0;

}
