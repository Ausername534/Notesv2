/**
Consider the following code.

#include <iostream>
using namespace std;

class Product {
private:
    string name;
public:
    Product(string name): name(name) {}
    string getName() {
        return name;
    }
};

class Factory {
private:
    string location;
    int capacity;
public:
    Factory(string location, int capacity): location(location), capacity(capacity) {}
    void makeProduct(Product product);
};

void Factory::makeProduct(Product product) {
    if (capacity-- > 0) {
        cout << "Factory is now making " << product.getName() << endl;
    } else {
        cout << "Factory out of capacity." << endl;
    }
}

int main() {
    // TODO: your code goes here
    return 0;
}
In main create at least 2 factories and 5 products. Call makeProduct to start making the products at the factories.

**/



#include <iostream>
using namespace std;

class Product {
private:
    string name;
public:
    Product(string name) : name(name) {}
    string getName() {
        return name;
    }
};

class Factory {
private:
    string location;
    int capacity;
public:
    Factory(string location, int capacity) : location(location), capacity(capacity) {}
    void makeProduct(Product product);
};

void Factory::makeProduct(Product product) {
    if (capacity-- > 0) {
        cout << "Factory is now making " << product.getName() << endl;
    }
    else {
        cout << "Factory out of capacity." << endl;
    }
}




int main() {
    Factory factory1("New York", 3);
    Factory factory2("Los Angeles", 4);

    Product p1("Chair");
    Product p2("Table");
    Product p3("Lamp");
    Product p4("Desk");
    Product p5("Bookshelf");

    factory1.makeProduct(p1);
    factory1.makeProduct(p2);
    factory1.makeProduct(p3);
    factory1.makeProduct(p4);



    factory2.makeProduct(p3);
    factory2.makeProduct(p4);
    factory2.makeProduct(p5);

    return 0;
}
