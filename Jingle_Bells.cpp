#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Check if N is odd as per the constraints
    if (N % 2 == 0) {
        cout << "N should be odd as per the constraints." << endl;
        return 1;
    }

    // Print the top part of the tree
    for (int i = 0; i < N; i++) {
        // Print spaces
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }
        // Print asterisks
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    // Print the trunk of the tree
    int trunkHeight = N / 2;
    for (int i = 0; i < trunkHeight; i++) {
        for (int j = 0; j < N - 1; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    return 0;
}
