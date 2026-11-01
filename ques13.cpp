#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class Student : public Person {
public:
    int marks;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks;
    }
};

int main() {
    Student s;

    s.input();
    cout << "Enter marks: ";
    cin >> s.marks;

    s.display();
    return 0;
}