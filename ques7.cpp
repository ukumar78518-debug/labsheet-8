#include <iostream>
using namespace std;

void sumMatrix(int a[10][10], int b[10][10], int r, int c) {
    cout << "Sum of matrices:\n";

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int a[10][10], b[10][10], r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    if(r < 1 || r > 10 || c < 1 || c > 10) return 0;

    cout << "Enter first matrix:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> b[i][j];

    sumMatrix(a, b, r, c);
    return 0;
}