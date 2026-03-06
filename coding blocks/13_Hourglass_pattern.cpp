// Hourglass pattern
// 5 4 3 2 1 0 1 2 3 4 5 
//   4 3 2 1 0 1 2 3 4 
//     3 2 1 0 1 2 3 
//       2 1 0 1 2 
//         1 0 1 
//           0 
//         1 0 1 
//       2 1 0 1 2 
//     3 2 1 0 1 2 3 
//   4 3 2 1 0 1 2 3 4 
// 5 4 3 2 1 0 1 2 3 4 5 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of rows:";
    cin >> n;

    // --- Part 1: Upper Half (including the middle row 0) ---
    for (int i = n; i >= 0; i--) {
        // Print leading spaces
        // Each missing number in the sequence contributes 2 spaces
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }

        // Print decreasing numbers
        for (int j = i; j >= 0; j--) {
            cout << j << " ";
        }

        // Print increasing numbers (skip 0 to avoid repetition)
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // --- Part 2: Lower Half ---
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }

        // Print decreasing numbers
        for (int j = i; j >= 0; j--) {
            cout << j << " ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}