#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    int price;

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Car c1, c2;

    c1.brand = "BMW";
    c1.price = 5000000;

    c2.brand = "Audi";
    c2.price = 4000000;

    c1.display();
    c2.display();

    return 0;
}