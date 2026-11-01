#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void countWords(string str) {
    string word;
    stringstream ss(str);
    int count = 0;

    while(ss >> word) {
        count++;
    }

    cout << "Total words: " << count;
}

int main() {
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    countWords(str);
    return 0;
}