#include <iostream>
using namespace std;

void prime(int n) {
    int count = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0)
            count++;
    }

    if(count == 2)
        cout << "Prime Number";
    else
        cout << "Not Prime Number";
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    prime(n);
    return 0;
}