/** Assignment:
Write a base class Person and a derived class Student.

A Person has a first name and a last name. A Student is a Person (it inherits) and it also has a student id.

Write a Person class

write a constructor
write  accessors (getters)
write  mutators (setters)
Write a  Student class

write constructors
write accessors (getters)
write mutators (setters)
Write a main( ) to test your classes:

create a Student object
print values from the Student object

**/


#include <iostream>

class Person {

public:


    std::string Firstname;
    std::string Lastname;

    void setFirstname(std::string Fn) {
        //std::cin >> Fn;
        //Fn = Firstname;
        Firstname = Fn;
    }

    void setLastname(std::string ln) {
        //std::cin >> Lastname;
        //ln = Lastname;
        Lastname = ln;
    }

    std::string getFirstname() {
        return Firstname;
    }

    std::string getLastname() {
        return Lastname;
    }

    Person() {
        std::cout << "Today's class is: Math class" << "\n";
    }
};

class Student : public Person {
public:


    int studentid;

    void setstudentid(int id) {
        studentid = id;
    }


    int getstudentid() {
        return studentid;
    }

    Student() {
        std::cout << "Everyone is wearing a backpack" << "\n";
    }

};

int main() {

    Student myObj;

    myObj.setFirstname("steve");
    myObj.setLastname("block");
    myObj.setstudentid(1);

    std::cout << "First Name is: " << myObj.getFirstname() << "\n";
    std::cout << "Last Name is: " << myObj.getLastname() << "\n";

    std::cout << "studentid is: " << myObj.getstudentid() << "\n";


    return 0;
}
