#include <iostream>
using namespace std;

void diagonalSum(int a[10][10], int n) {
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += a[i][i];
    }

    cout << "Diagonal sum: " << sum;
}

int main() {
    int a[10][10], n;

    cout << "Enter matrix size: ";
    cin >> n;

    if(n < 1 || n > 10) return 0;

    cout << "Enter matrix:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    diagonalSum(a, n);
    return 0;
}