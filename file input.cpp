/** Assignmnet:
Write a program that asks a user to input a file name and then reads the file and produces output. The file has the following format.

Kim 8 10 6 4
Ivan 9 2 7 8
Sue 7 8 9 10
Kevin 4 6 5 7
The output should be each name followed by the average score. For example:

Kim: 7.00
Ivan: 6.00
Sue: 8.50
Kevin: 5.55
**/



// Online C++ compiler to run C++ program online
#include <iostream>
#include <fstream> // added for file handling
#include <iomanip>

using namespace std;


int main() {

    string filename;
    
    ifstream file; // used for reading from a file

    cout << "Enter file name: ";
    cin >> filename;

    file.open(filename); // used for opening a file

    // will check if the file is open
    if (!file) {
        cout << "Error opening file." << endl;
        return 1;
    }



    string name;
    double s1, s2, s3, s4;


    // reads the file one line at a time.
    while (file >> name >> s1 >> s2 >> s3 >> s4) {
        double average = (s1 + s2 + s3 + s4) / 4.0;

        cout << name << ": " << fixed << setprecision(2) << average << endl;
    }

    file.close();


    return 0;
}

