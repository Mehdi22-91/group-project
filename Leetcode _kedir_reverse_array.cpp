// Author: Kedir
// Problem: Reverse Array (HackerRank-style)
// Language: C++

#include <iostream>
using namespace std;

void reverseArray(string arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i];
        if (i != 0) cout << ", ";
    }
}

int main() {
    int m;
    cout << "How many elements do you want to input?" << endl;
    cin >> m;

    string arr[m];
    cout << "Enter " << m << " elements:" << endl;

    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    cout << "The reverse order is: ";
    reverseArray(arr, m);

    return 0;
}
