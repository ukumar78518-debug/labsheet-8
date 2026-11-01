#include <iostream>
#include <string>
using namespace std;

void copyString(string a) {
    string b = a;
    cout << "Copied string: " << b;
}

int main() {
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    copyString(str);
    return 0;
}