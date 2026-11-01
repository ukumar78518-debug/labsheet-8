#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
public:
    double radius = 5;

    void area() {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
public:
    double length = 10;
    double breadth = 5;

    void area() {
        cout << "Rectangle Area: " << length * breadth;
    }
};

int main() {
    Circle c;
    Rectangle r;

    c.area();
    r.area();

    return 0;
}