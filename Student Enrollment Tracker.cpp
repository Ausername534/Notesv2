/** assignment:
Create a class called Student that has:

a few properties, for example, first name, last name and grade
a constructor that takes parameters and can initialize the properties
getter and setter function that can be used to access and modify the properties
In main( ), create a vector Student objects and do the following:

in a loop take input from uses and use the input to create Student objects
add the Student objects to the vector, recall the push_back function, for example: enrolledStudents.push_back(student)
in a second loop use the getters to print information about each student
**/

#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;



class Student {
private:
	std::string first_name;
	std::string last_name;
	double grade;

public:
	//constuctor
	Student(std::string fName, std::string lName, double g) {
		std::string first_name = fName;
		std::string last_name = lName;
		char grade = g;
	}
	// gettters
	string getFirstName() const {
		return first_name;
	}

	string getLastName() const {
		return last_name;
	}

	double getGrade() const {
		return grade;
	}

	// setters
	void setFirstName(string fName) {
		first_name = fName;
	}

	void setLastName(string lName) {
		last_name = lName;
	}

	void setGrade(char g) {
		grade = g;
	}





};




int main() {
	vector<Student> enrolledStudents;
	int numberOfStudents;

	cout << "How many students do you want to enter? ";
	cin >> numberOfStudents;

	// First loop: take input and add students
	for (int i = 0; i < numberOfStudents; i++) {
		string firstName, lastName;
		char grade;

		cout << "\nStudent " << i + 1 << "\n";
		cout << "First name: ";
		cin >> firstName;

		cout << "Last name: ";
		cin >> lastName;


		cout << "Grade: ";
		cin >> grade;

		Student student(firstName, lastName, grade);
		enrolledStudents.push_back(student);
	}

	// second loop: print student info using getters
	cout << "\n--- Student List ---\n";
	for (int i = 0; i < enrolledStudents.size(); i++) {
		cout << "Student " << i + 1 << ":\n";
		cout << "First Name: " << enrolledStudents[i].getFirstName() << "\n";
		cout << "Last Name: " << enrolledStudents[i].getLastName() << "\n";
		cout << "Grade: " << enrolledStudents[i].getGrade() << "\n";
		cout << "\n";
	}








	return 0;


}
