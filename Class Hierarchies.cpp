/** Assignment:
Ship, CruiseShip and CargoShip Classes and

Design a Ship class that has the following members:

    A member variable for the name of the ship (a string )
    A member variable for the year that the ship was built (a string)
    A constructor and appropriate accessors and mutators
    A virtual print function that displays the ship’s name and the year it was built.
Design a CruiseShip class that is derived from the Ship class. The CruiseShip class should have the following members:

    A member variable for the maximum number of passengers (an int)
    A constructor and appropriate accessors and mutators
    A print function that overrides the print function in the base class. The CruiseShip class’s print function should display only the ship’s name and the maximum number of passengers.
Design a CargoShip class that is derived from the Ship class. The CargoShip class should have the following members:

    A member variable for the cargo capacity in tonnage (an int)
    A constructor and appropriate accessors and mutators
    A print function that overrides the print function in the base class. The CargoShip class’s print function should display only the ship’s name and the ship’s cargo capacity.
Demonstrate the classes in a program that has a vector of Ship. Add (using push_back) CruiseShip and CargoShip objects onto the vector of ship. The program should then step through (use a loop) the vector, calling each object’s print function.
**/




#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Ship {
protected:
    string name;
    string yearBuilt;

public:
    Ship(string n = "", string y = "") : name(n), yearBuilt(y) {}

    virtual void print() const {
        cout << "Ship Name: " << name
             << ", Year Built: " << yearBuilt << endl;
    }

    virtual ~Ship() {}
};

class CruiseShip : public Ship {
private:
    int maxPassengers;

public:
    CruiseShip(string n = "", string y = "", int maxP = 0)
        : Ship(n, y), maxPassengers(maxP) {}

    void print() const override {
        cout << "Cruise Ship Name: " << name
             << ", Max Passengers: " << maxPassengers << endl;
    }
};

class CargoShip : public Ship {
private:
    int cargoCapacity;

public:
    CargoShip(string n = "", string y = "", int cap = 0)
        : Ship(n, y), cargoCapacity(cap) {}

    void print() const override {
        cout << "Cargo Ship Name: " << name
             << ", Cargo Capacity: " << cargoCapacity << " tons" << endl;
    }
};

int main() {
    vector<Ship*> fleet;

    fleet.push_back(new Ship("Generic Vessel", "1990"));
    fleet.push_back(new CruiseShip("Ocean Queen", "2005", 3000));
    fleet.push_back(new CargoShip("Heavy Hauler", "2010", 50000));

    for (auto s : fleet) {
        s->print();
    }

    for (auto s : fleet) {
        delete s;
    }

    return 0;
}
