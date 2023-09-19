// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check if the strings
// can be made equal or not by
// reversing a substring of X
bool checkString(string X, string Y)
{
	int n = X.length();
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			reverse(X.begin() + i, X.begin() + j + 1);
			if (X == Y) {
				cout << "Yes" << endl;
				return true;
			}
			reverse(X.begin() + i, X.begin() + j + 1);
		}
	}
	cout << "No" << endl;
	return false;
}


// Driver Code
int main()
{
	string X = "adcbef", Y = "abcdef";

	// Function Call
	checkString(X, Y);

	return 0;
}
