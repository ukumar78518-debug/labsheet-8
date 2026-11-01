#include <iostream>
using namespace std;

void binarySearch(int a[], int n, int key) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(a[mid] == key) {
            cout << "Element found";
            return;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Element not found";
}

int main() {
    int a[100], n, key;

    cout << "Enter size: ";
    cin >> n;

    if(n < 1 || n > 100) return 0;

    cout << "Enter sorted elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter search element: ";
    cin >> key;

    binarySearch(a, n, key);
    return 0;
}