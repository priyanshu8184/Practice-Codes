// inverted pattern hour glass
// 5
// 5                   5 
// 5 4               4 5 
// 5 4 3           3 4 5 
// 5 4 3 2       2 3 4 5 
// 5 4 3 2 1   1 2 3 4 5 
// 5 4 3 2 1 0 1 2 3 4 5 
// 5 4 3 2 1   1 2 3 4 5 
// 5 4 3 2       2 3 4 5 
// 5 4 3           3 4 5 
// 5 4               4 5 
// 5                   5 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of rows:";
    cin >> n;

    // Total rows will be 2*n + 1
    int rows = 2 * n + 1;

    for (int i = 0; i < rows; i++) {
        // Determine how many numbers to print in this row
        // 'valCount' represents how far from N we go towards 0
        int valCount;
        if (i <= n) {
            valCount = i; // Growing part
        } else {
            valCount = 2 * n - i; // Shrinking part
        }

        // 1. Print Left Numbers (Decreasing)
        for (int j = 0; j <= valCount; j++) {
            cout << n - j << " ";
        }

        // 2. Print Spaces
        // Each number and space takes up 2 character positions
        int spaces = 2 * (n - valCount) - 1;
        for (int j = 0; j < spaces; j++) {
            cout << "  ";
        }

        // 3. Print Right Numbers (Increasing)
        // If it's the middle row, skip the first number (0) to avoid duplication
        int startVal = n - valCount;
        if (valCount == n) {
            startVal = 1; 
        }

        for (int j = startVal; j <= n; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}